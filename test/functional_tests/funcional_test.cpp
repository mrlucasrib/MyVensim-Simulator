//
// Created by lucas on 13/09/2020.
//

#include "funcional_test.h"
#include "modelImpl.h"
#include "../flow_concret.h"
#include <cassert>
#include <cmath>
#include <systemImpl.h>

void funcional_test::exponentialTest() {
    auto *s1 = new SystemImpl();
    auto *s2 = new SystemImpl();
    auto *m = new ModelImpl();
    auto *f = new FlowExp(s1, s2);
    m->add(f);
    s1->setValue(100);
    s2->setValue(0);
    m->exists("ss", Type::System);
    m->execute(0, 100);

    assert(fabs(s1->getValue() - 36.6032) < 0.0001);
    assert(fabs(s2->getValue() - 63.3968) < 0.0001);
}

void funcional_test::LogTest() {
    auto *s1 = new SystemImpl();
    auto *s2 = new SystemImpl();
    auto *m = new ModelImpl();
    auto *f = new FlowLog(s1, s2);
    m->add(f);
    s1->setValue(100);
    s2->setValue(10);

    m->execute(0, 100);
    assert(fabs(s1->getValue() - 88.2167) < 0.0001);
    assert(fabs(s2->getValue() - 21.7833) < 0.0001);
}

void funcional_test::ultimateTest() {
    auto *modelo = new ModelImpl();
    auto *q1 = new SystemImpl(100);
    auto *q2 = new SystemImpl(0.0);
    auto *q3 = new SystemImpl(100);
    auto *q4 = new SystemImpl(0.0);
    auto *q5 = new SystemImpl(0.0);
    auto *f1 = new FlowExp(q4, q1);
    auto *f2 = new FlowExp(q1, q2);
    auto *f3 = new FlowExp(q1, q3);
    auto *f4 = new FlowExp(q2, q3);
    auto *f5 = new FlowExp(q3, q4);
    auto *f6 = new FlowExp(q2, q5);


    modelo->add(f1);
    modelo->add(f2);
    modelo->add(f3);
    modelo->add(f4);
    modelo->add(f5);
    modelo->add(f6);

    modelo->execute(0, 100);

    assert(fabs(q1->getValue() - 31.8513) < 0.0001);
    assert(fabs(q2->getValue() - 18.4003) < 0.0001);
    assert(fabs(q3->getValue() - 77.1143) < 0.0001);
    assert(fabs(q4->getValue() - 56.1728) < 0.0001);
    assert(fabs(q5->getValue() - 16.4612) < 0.0001);

}


