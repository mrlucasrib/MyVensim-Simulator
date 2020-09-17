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

const char *SystemImpl::getName() const {
    return name;
}

void SystemImpl::setName(const char *name) {
    SystemImpl::name = name;
}

SystemImpl &SystemImpl::operator=(const SystemImpl &s) {
    if(this == &s)
        return *this;
    this->setName(s.getName());
    this->setValue(s.value);
    return *this;
}

