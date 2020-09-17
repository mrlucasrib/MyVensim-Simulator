//
// Created by lucas on 15/09/2020.
//

#include "model_test.h"
#include "../src/modelImpl.h"
#include "../flow_concret.h"
#include <cassert>
#include "systemImpl.h"

void model_test::addTest() {
    auto *m = new ModelImpl();
    auto *s1 = new SystemImpl();
    auto *s2 = new SystemImpl();
    auto *f = new FlowExp(s1, s2);
    m->add(f);
//    assert(m->flowContainer[0] == f);
}

void model_test::removeTest() {
    auto *m = new ModelImpl();
    auto *s1 = new SystemImpl();
    auto *s2 = new SystemImpl();
    auto *f = new FlowExp(s1, s2);
    m->add(f);
    m->remove(f);
//    assert(m->flowContainer.size() == 0);
}

void model_test::comparisonTest() {
    auto *m = new ModelImpl();
    auto *s1 = new SystemImpl();
    auto *s2 = new SystemImpl();
    auto *f = new FlowExp(s1, s2);

    auto *m1 = new ModelImpl();
    m->add(f);
    m1->add(f);
    assert(m != m1);
}

void model_test::copyTest() {
    auto *m = new ModelImpl();
    auto *s1 = new SystemImpl();
    auto *s2 = new SystemImpl();
    auto *f = new FlowExp(s1, s2);
    m->add(f);
    auto m1 = m;
    assert(m1 == m);
}
