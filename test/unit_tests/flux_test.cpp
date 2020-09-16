//
// Created by lucas on 15/09/2020.
//

#include "flux_test.h"
#include "../flux_concret.h"
#include <cassert>
#include <systemImpl.h>

void flux_test::getSource() {
    auto *s1 = new SystemImpl();
    auto *flux = new FluxExp();
    flux->setSource(s1);
    assert(flux->getSource() == s1);
}

void flux_test::setSource() {
    auto *s1 = new SystemImpl();
    auto *flux = new FluxExp();
    flux->setSource(s1);
    assert(flux->getSource() == s1);
}

void flux_test::getTarget() {
    auto *s1 = new SystemImpl();
    auto *flux = new FluxExp();
    flux->setTarget(s1);
    assert(flux->getTarget() == s1);
}

void flux_test::setTarget() {
    auto *s1 = new SystemImpl();
    auto *flux = new FluxExp();
    flux->setTarget(s1);
    assert(flux->getTarget() == s1);
}

void flux_test::clearSource() {
    auto *s1 = new SystemImpl();
    auto *flux = new FluxExp();
    flux->setSource(s1);
    flux->clearSource();
    assert(flux->getSource() == nullptr);
}

void flux_test::clearTarget() {
    auto *s1 = new SystemImpl();
    auto *flux = new FluxExp();
    flux->setTarget(s1);
    flux->clearTarget();
    assert(flux->getTarget() == nullptr);
}

void flux_test::comparisonTest() {
    auto *s1 = new SystemImpl();
    auto *s2 = new SystemImpl();
    auto *flux1 = new FluxExp(s1, s2);
    auto *flux2 = new FluxExp(s1, s2);

    assert(flux1 == flux2);
}

void flux_test::copyTest() {
    auto *s1 = new SystemImpl();
    auto *s2 = new SystemImpl();
    auto *flux1 = new FluxExp(s1, s2);
    auto *flux2 = flux1;
    assert(flux1 == flux2);
}


