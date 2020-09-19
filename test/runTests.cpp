//
// Created by lucas on 15/09/2020.
//

#include "runTests.h"
#include "functional_tests/funcional_test.h"
#include "unit_tests/flux_test.h"
#include "unit_tests/model_test.h"
#include "unit_tests/system_test.h"
#include "functional_tests/func_test.h"


void runTests::Run() {
    funcional_test::exponentialTest();
    funcional_test::LogTest();
    funcional_test::ultimateTest();

    flux_test::getSource();
    flux_test::setSource();
    flux_test::getTarget();
    flux_test::setTarget();
    flux_test::clearSource();
    flux_test::clearTarget();
    flux_test::comparisonTest();
    flux_test::copyTest();

    model_test::addTest();
    model_test::removeTest();
    model_test::comparisonTest();
    model_test::copyTest();

    system_test::SystemImplTest();
    system_test::getValueTest();
    system_test::setValueTest();
    system_test::comparisonTest();
}

int main() {
    runTests::Run();
    exponentialTest();
    LogTest();
    ultimateTest();
    return 0;
}