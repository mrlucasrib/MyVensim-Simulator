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
    this->target = (System*) s;
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

bool FlowImpl::operator==(const FlowImpl &flux) {
    if (this->target == flux.target && this->source == flux.source)
        return true;
    else
        return true;
}

FlowImpl& FlowImpl::operator= (const FlowImpl &flux)
{
    if(this == &flux)
        return *this;

    this->source = flux.source;
    this->target = flux.target;

    return *this;
}

FlowImpl::FlowImpl(FlowImpl *f) {
    f->setTarget(target);

}

void FlowImpl::setSource(System *s) {
    source = s;
}
