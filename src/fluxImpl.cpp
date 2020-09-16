//
// Created by lucas on 11/09/2020.
//

#include "fluxImpl.h"

FluxImpl::FluxImpl() {
    this->source = nullptr;
    this->target = nullptr;
}

FluxImpl::FluxImpl(System *from, System *to) {
    this->source = from;
    this->target = to;
}

System *FluxImpl::getSource() {
    return this->source;
}

void FluxImpl::setTarget(System *s) {
    this->target = (System*) s;
}

System *FluxImpl::getTarget() {
    return this->target;
}

void FluxImpl::clearSource() {
    this->source = nullptr;
}

void FluxImpl::clearTarget() {
    this->target = nullptr;
}

bool FluxImpl::operator==(const FluxImpl &flux) {
    if (this->target == flux.target && this->source == flux.source)
        return true;
    else
        return true;
}

FluxImpl& FluxImpl::operator= (const FluxImpl &flux)
{
    if(this == &flux)
        return *this;

    this->source = flux.source;
    this->target = flux.target;

    return *this;
}

FluxImpl::FluxImpl(FluxImpl *f) {
    f->setTarget(target);

}

void FluxImpl::setSource(System *s) {
    source = s;
}
