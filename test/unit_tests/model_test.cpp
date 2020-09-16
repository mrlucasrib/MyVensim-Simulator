//
// Created by lucas on 15/09/2020.
//

#include "model_test.h"
#include "../src/modelImpl.h"
#include "../flux_concret.h"
#include <cassert>

void model_test::addTest() {
    auto *m = new ModelImp();
    auto *s1 = new SystemImpl();
    auto *s2 = new SystemImpl();
    auto *f = new FluxExp(s1, s2);
    m->add(f);
    assert(m->flux_vector[0] == f);
}

void model_test::removeTest() {
    auto *m = new ModelImp();
    auto *s1 = new SystemImpl();
    auto *s2 = new SystemImpl();
    auto *f = new FluxExp(s1, s2);
    m->add(f);
    m->remove(f);
    assert(m->flux_vector.size() == 0);
}

void model_test::comparisonTest() {
    auto *m = new ModelImp();
    auto *s1 = new SystemImpl();
    auto *s2 = new SystemImpl();
    auto *f = new FluxExp(s1, s2);

    auto *m1 = new ModelImp();
    m->add(f);
    m1->add(f);
    assert(m == m1);
}

void model_test::copyTest() {
    auto *m = new ModelImp();
    auto *s1 = new SystemImpl();
    auto *s2 = new SystemImpl();
    auto *f = new FluxExp(s1, s2);
    m->add(f);
    auto m1 = m;
    assert(m1 == m);
}