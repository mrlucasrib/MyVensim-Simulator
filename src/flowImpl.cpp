//
// Created by lucas on 11/09/2020.
//

#include "flowImpl.h"

FlowImpl::FlowImpl() {
    this->source = nullptr;
    this->target = nullptr;
}

FlowImpl::FlowImpl(System *from, System *to) {
    this->source = from;
    this->target = to;
}

System *FlowImpl::getSource() {
    return this->source;
}

void FlowImpl::setTarget(System *s) {
    this->target = (System *) s;
}

System *FlowImpl::getTarget() {
    return this->target;
}

void FlowImpl::clearSource() {
    this->source = nullptr;
}

void FlowImpl::clearTarget() {
    this->target = nullptr;
}


FlowImpl &FlowImpl::operator=(FlowImpl &f) {
    if (this == &f)
        return *this;
    this->setName(f.getName());
    this->setSource(f.getSource());
    this->setTarget(f.getTarget());
    return *this;
}

FlowImpl::FlowImpl(FlowImpl *f) {
    f->setTarget(target);

}

void FlowImpl::setSource(System *s) {
    source = s;
}

void FlowImpl::setName(const char *n) {
    this->name = n;
}

const char *FlowImpl::getName() const {
    return this->name;
}

bool FlowImpl::operator==(FlowImpl &f) {
    if (this->target == f.target && this->source == f.source && this->name == f.getName())
        return true;
    else
        return false;
}
