//
// Created by lucas on 15/09/2020.
//

#include "system_test.h"
#include "../src/systemImpl.h"
#include <cassert>

void system_test::SystemImplTest() {
    float v = 5;
    auto *sys = new SystemImpl(v);
    assert(sys->getValue() == v);
}

void system_test::getValueTest() {
    auto *sys = new SystemImpl(5);
    assert(sys->getValue() == 5);
}

void system_test::setValueTest() {
    float v = 5;
    auto *sys = new SystemImpl();
    sys->setValue(v);
    assert(sys->getValue() == v);
}

void system_test::comparisonTest() {
    auto *sys1 = new SystemImpl();
    auto *sys2 = new SystemImpl();
    assert(sys1 != sys2);

}
