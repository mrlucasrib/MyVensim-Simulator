//
// Created by lucas on 13/09/2020.
//

#include "funcional_test.h"
#include "model.h"
#include "flux.h"
#include <cassert>
#include <cmath>

void funcional_test::exponentialTest() {
    auto *s1 = new System();
    auto *s2 = new System();
    auto *m = new Model();
    auto *f = new Flux(s1, s2);
    m->add(f);
    s1->setValue(100);
    s2->setValue(0);
    f->setFormula("result = 0.01 * source");

    m->execute(0, 100);

    assert(fabs(s1->getValue() - 36.6032) < 0.0001);
    assert(fabs(s2->getValue() - 63.3968) < 0.0001);
}

void funcional_test::LogTest() {
    auto *s1 = new System();
    auto *s2 = new System();
    auto *m = new Model();
    auto *f = new Flux(s1, s2);
    m->add(f);
    s1->setValue(100);
    s2->setValue(10);
    f->setFormula("result = 0.01 * target * (1 - target / 70)");

    m->execute(0, 100);
    assert(fabs(s1->getValue() - 88.2167) < 0.0001);
    assert(fabs(s2->getValue() - 21.7833) < 0.0001);
}

void funcional_test::ultimateTest() {
    auto *modelo = new Model();
    auto *q1 = new System(100);
    auto *q2 = new System(0.0);
    auto *q3 = new System(100);
    auto *q4 = new System(0.0);
    auto *q5 = new System(0.0);
    auto *f1 = new Flux(q1, q2);
    auto *f2 = new Flux(q1, q3);
    auto *f3 = new Flux(q4, q1);
    auto *f4 = new Flux(q3, q4);
    auto *f5 = new Flux(q2, q5);
    auto *f6 = new Flux(q2, q3);

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

