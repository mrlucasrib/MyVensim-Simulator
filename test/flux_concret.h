//
// Created by lucas on 15/09/2020.
//

#ifndef MYVENSIM_FLUX_CONCRET_H
#define MYVENSIM_FLUX_CONCRET_H
#include "../src/fluxImpl.h"


class FluxExp : public FluxImpl {

    float execute() override;

public:
    FluxExp(FluxExp *f) : FluxImpl(f) {}

    FluxExp() : FluxImpl() {}


    FluxExp(System *s1, System *s2) : FluxImpl(s1, s2) {}
};

class FluxLog : public FluxImpl {

public:
    float execute() override;

    FluxLog() : FluxImpl() {}

    FluxLog(System *s1, System *s2) : FluxImpl(s1, s2) {}

    FluxLog(FluxLog *f) : FluxImpl(f) {}



};



#endif //MYVENSIM_FLUX_CONCRET_H
