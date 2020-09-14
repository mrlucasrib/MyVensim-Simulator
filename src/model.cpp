//
// Created by lucas on 11/09/2020.
//

#include "model.h"

Model::Model(Model *model) {
    this->flux_vector = model->flux_vector;
    this->system_vector = model->system_vector;
}

Model::Model() {
    this->flux_vector.clear();
    this->system_vector.clear();
}

void Model::add(Flux *f) {
    this->flux_vector.push_back(f);
}

void Model::add(System *s) {
    this->system_vector.push_back(s);
}

void Model::remove(Flux *f) {
    for (int i = 0; i < this->flux_vector.size(); ++i) {
        if (this->flux_vector[i] == f) {
            this->flux_vector.erase(this->flux_vector.begin() + i);
        }
    }
}

void Model::remove(System *s) {
    for (int i = 0; i < this->system_vector.size(); ++i) {
        if (this->system_vector[i] == s) {
            this->system_vector.erase(this->system_vector.begin() + i);
        }
    }
}

void Model::execute(int start, int end) {
    for (int i = start; i < end; ++i) {
        for (auto flux : this->flux_vector) {
            long double value = flux->execute();
            flux->getSource()->setValue(flux->getSource()->getValue() - value);
            flux->getTarget()->setValue(flux->getTarget()->getValue() + value);

        }


    }
}

