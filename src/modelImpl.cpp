//
// Created by lucas on 11/09/2020.
//

#include "modelImpl.h"

ModelImpl::ModelImpl(ModelImpl *model) {
    this->flux_vector = model->flux_vector;
}

ModelImpl::ModelImpl() {
    this->flux_vector.clear();
}

void ModelImpl::add(Flow *f) {
    this->flux_vector.push_back(f);
}


void ModelImpl::remove(Flow *f) {
    for (int i = 0; i < this->flux_vector.size(); ++i) {
        if (this->flux_vector[i] == f) {
            this->flux_vector.erase(this->flux_vector.begin() + i);
        }
    }
}


void ModelImpl::execute(int start, int end) {
    std::vector<double> v;
    std::vector<double>::iterator vIt;

    for(int time = start; time < end; time++){

        for(auto flow : this->flux_vector){

            v.push_back(flow->execute());
        }

        vIt = v.begin();
        for(auto flow : this->flux_vector){

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

bool ModelImpl::operator==(const ModelImpl &model) {
    if(this == &model)
        return true;
    if(this->flux_vector.size() != model.flux_vector.size())
        return false;

    return true;
}

