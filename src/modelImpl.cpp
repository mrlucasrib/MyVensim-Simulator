//
// Created by lucas on 11/09/2020.
//

#include "modelImpl.h"
#include "systemImpl.h"

ModelImpl::ModelImpl(ModelImpl *model) {
    this->flowContainer = model->flowContainer;
}

ModelImpl::ModelImpl() {
    this->flowContainer.clear();
}

void ModelImpl::add(Flow *f) {
    this->flowContainer.push_back(f);
}


void ModelImpl::remove(Flow *f) {
    for (int i = 0; i < this->flowContainer.size(); ++i) {
        if (this->flowContainer[i] == f) {
            this->flowContainer.erase(this->flowContainer.begin() + i);
        }
    }
}


void ModelImpl::execute(int start, int end) {
    std::vector<double> v;
    std::vector<double>::iterator vIt;

    for (int time = start; time < end; time++) {

        for (auto flow : this->flowContainer) {

            v.push_back(flow->execute());
        }

        vIt = v.begin();
        for (auto flow : this->flowContainer) {

            auto *sourceSystem = flow->getSource();

            if (sourceSystem != nullptr)
                sourceSystem->setValue(sourceSystem->getValue() - (*vIt));

            auto *targetSystem = flow->getTarget();

            if (targetSystem != nullptr)
                targetSystem->setValue(targetSystem->getValue() + (*vIt));

            vIt++;
        }

        v.clear();

    }
}

ModelImpl &ModelImpl::operator=(ModelImpl &m) {
    throw "Copy not allowed";
}

bool ModelImpl::operator==(ModelImpl &model) {
    if (this == &model)
        return true;
    if (this->flowContainer.size() != model.flowContainer.size())
        return false;

    return true;
}

std::string ModelImpl::getName() const {
    return name;
}

void ModelImpl::setName(std::string n) {
    ModelImpl::name = n;
}

bool ModelImpl::exists(const std::string &s, Type t) {
    switch (t) {
        case Type::System:
            for (auto sc : this->systemContainer) {
                if (sc->getName() == s)
                    return true;
            }
            break;
        case Type::Flow:
            for (auto fc : this->flowContainer) {
                if (fc->getName() == s)
                    return true;
                break;
            }
    }
    return false;
}

System *ModelImpl::createSystem(const std::string &n) {
    auto *s = new SystemImpl();
    s->setName(n);
    add(s);
    return s;
}

System *ModelImpl::createSystem(const std::string &n, double v) {
    auto *s = new SystemImpl();
    s->setName(n);
    s->setValue(v);
    add(s);
    return s;
}

Model *Model::createModel() {
    auto *m = new ModelImpl();
    return m;
}

Model *ModelImpl::createModel() {
    return Model::createModel();
}

Flow *ModelImpl::findFlow(const std::string &n) {
    for (auto flow : this->flowContainer) {
        if (flow->getName() == n)
            return flow;
    }
    return nullptr;
}

System *ModelImpl::findSystem(const std::string &n) {
    for (auto sys : this->systemContainer) {
        if (sys->getName() == n)
            return sys;
    }

    return nullptr;
}

void ModelImpl::add(System *s) {
    this->systemContainer.push_back(s);

}

