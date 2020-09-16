//
// Created by lucas on 15/09/2020.
//

#ifndef MYVENSIM_FLUX_CONCRET_H
#define MYVENSIM_FLUX_CONCRET_H
#include "../src/flowImpl.h"


class FluxExp : public FlowImpl {

    float execute() override;

public:
    FluxExp(FluxExp *f) : FlowImpl(f) {}

    FluxExp() : FlowImpl() {}


    FluxExp(System *s1, System *s2) : FlowImpl(s1, s2) {}
};

class FluxLog : public FlowImpl {

public:
    float execute() override;

    FluxLog() : FlowImpl() {}

    FluxLog(System *s1, System *s2) : FlowImpl(s1, s2) {}

    FluxLog(FluxLog *f) : FlowImpl(f) {}



};



#endif //MYVENSIM_FLUX_CONCRET_H
