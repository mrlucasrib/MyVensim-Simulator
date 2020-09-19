//
// Created by lucas on 19/09/2020.
//

#include "func_test.h"

void exponentialTest() {
    auto *m = Model::createModel();
    auto *s1 = m->createSystem("sys1", 100.0);
    auto *s2 = m->createSystem("sys2", 0.0);
    m->createFlow<FlowExp>("exp", s1, s2);
    m->execute(0, 100);
    assert(fabs(m->findSystem("sys1")->getValue() - 36.6032) < 0.0001);
    assert(fabs(m->findSystem("sys2")->getValue() - 63.3968) < 0.0001);
}

void LogTest() {
    auto *m = Model::createModel();
    m->createSystem("sys1", 100.0);
     m->createSystem("sys2", 10.0);
    m->createFlow<FlowLog>("exp", m->findSystem("sys1"), m->findSystem("sys2"));
    m->execute(0, 100);

    assert(fabs(m->findSystem("sys1")->getValue() - 88.2167) < 0.0001);
    assert(fabs(m->findSystem("sys2")->getValue() - 21.7833) < 0.0001);
}

void ultimateTest(){
    auto *m = Model::createModel();
    auto *q1 = m->createSystem("sys1",100);
    auto *q2 = m->createSystem("sys2",0.0);
    auto *q3 = m->createSystem("sys3",100);
    auto *q4 = m->createSystem("sys4",0.0);
    auto *q5 = m->createSystem("sys5",0.0);
    m->createFlow<FlowExp>("exp1", q4, q1);
    m->createFlow<FlowExp>("exp2", q1, q2);
    m->createFlow<FlowExp>("exp3", q1, q3);
    m->createFlow<FlowExp>("exp4", q2, q3);
    m->createFlow<FlowExp>("exp5", q3, q4);
    m->createFlow<FlowExp>("exp6", q2, q5);


    m->execute(0, 100);

    assert(fabs(q1->getValue() - 31.8513) < 0.0001);
    assert(fabs(q2->getValue() - 18.4003) < 0.0001);
    assert(fabs(q3->getValue() - 77.1143) < 0.0001);
    assert(fabs(q4->getValue() - 56.1728) < 0.0001);
    assert(fabs(q5->getValue() - 16.4612) < 0.0001);

}