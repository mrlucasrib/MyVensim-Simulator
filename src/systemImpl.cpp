//
// Created by lucas on 11/09/2020.
//

#include "systemImpl.h"


SystemImpl::SystemImpl(double v) {
    this->value = v;
}

SystemImpl::SystemImpl(SystemImpl *system) {
    this->value = system->value;
}

SystemImpl::SystemImpl() {
    this->value = 0;

}

double SystemImpl::getValue() {
    return this->value;
}

void SystemImpl::setValue(double v) {
    this->value = v;
}

bool SystemImpl::operator==(const SystemImpl &sys) {
    if (this == &sys)
        return true;
    else
        return false;
}

std::string SystemImpl::getName() const {
    return name;
}

void SystemImpl::setName(std::string name) {
    SystemImpl::name = name;
}

SystemImpl &SystemImpl::operator=(const SystemImpl &s) {
    if(this == &s)
        return *this;
    this->setName(s.getName());
    this->setValue(s.value);
    return *this;
}

