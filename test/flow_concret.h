//
// Created by lucas on 15/09/2020.
//

#ifndef MYVENSIM_FLOW_CONCRET_H
#define MYVENSIM_FLOW_CONCRET_H
#include "../src/flowImpl.h"


class FlowExp : public FlowImpl {

    double execute() override;

public:
    FlowExp(FlowExp *f) : FlowImpl(f) {}

    FlowExp() : FlowImpl() {}


    FlowExp(System *s1, System *s2) : FlowImpl(s1, s2) {}
};

class FlowLog : public FlowImpl {

public:
    double execute() override;

    FlowLog() : FlowImpl() {}

    FlowLog(System *s1, System *s2) : FlowImpl(s1, s2) {}

    FlowLog(FlowLog *f) : FlowImpl(f) {}



};



#endif //MYVENSIM_FLOW_CONCRET_H
