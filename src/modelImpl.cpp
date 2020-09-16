//
// Created by lucas on 11/09/2020.
//

#include "modelImpl.h"

ModelImp::ModelImp(ModelImp *model) {
    this->flux_vector = model->flux_vector;
}

ModelImp::ModelImp() {
    this->flux_vector.clear();
}

void ModelImp::add(FluxImpl *f) {
    this->flux_vector.push_back(f);
}


void ModelImp::remove(Flux *f) {
    for (int i = 0; i < this->flux_vector.size(); ++i) {
        if (this->flux_vector[i] == f) {
            this->flux_vector.erase(this->flux_vector.begin() + i);
        }
    }
}


void ModelImp::execute(int start, int end) {
//    for (int i = start; i < end; ++i) {
//        for (auto flux : this->flux_vector) {
//            float value;
//            value = flux->execute();
//            auto v1 = flux->getSource()->getValue() - value;
//            auto v2 = flux->getTarget()->getValue() + value;
//            flux->getSource()->setValue(v1);
//            flux->getTarget()->setValue(v2);
//
//        }

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

bool ModelImp::operator==(const ModelImp &model) {
    if(this == &model)
        return true;
    if(this->flux_vector.size() != model.flux_vector.size())
        return false;

    return true;
}

