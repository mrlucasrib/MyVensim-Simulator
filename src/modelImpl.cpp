//
// Created by lucas on 11/09/2020.
//

#include "modelImpl.h"

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

    for(int time = start; time < end; time++){

        for(auto flow : this->flowContainer){

            v.push_back(flow->execute());
        }

        vIt = v.begin();
        for(auto flow : this->flowContainer){

            auto* sourceSystem = flow->getSource();

            if(sourceSystem != nullptr)
                sourceSystem->setValue(sourceSystem->getValue() - (*vIt));

            auto* targetSystem = flow->getTarget();

            if(targetSystem != nullptr)
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
    if(this == &model)
        return true;
    if(this->flowContainer.size() != model.flowContainer.size())
        return false;

    return true;
}

const char *ModelImpl::getName() const {
    return name;
}

void ModelImpl::setName(const char *name) {
    ModelImpl::name = name;
}

