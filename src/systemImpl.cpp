//
// Created by lucas on 11/09/2020.
//

#include "systemImpl.h"


SystemImpl::SystemImpl(float v) {
    this->value = v;
}

SystemImpl::SystemImpl(SystemImpl *system) {
    this->value = system->value;
}

SystemImpl::SystemImpl() {
    this->value = 0;
}

float SystemImpl::getValue() {
    return this->value;
}

void SystemImpl::setValue(float v) {
    this->value = v;
}

bool SystemImpl::operator==(const SystemImpl &sys) {
    if (this == &sys)
        return true;
    else
        return false;
}

