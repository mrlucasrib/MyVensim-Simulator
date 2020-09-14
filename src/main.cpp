#include "../test/funcional_test.h"
#include <iostream>
#include "model.h"
#include "flux.h"
#include <cassert>
#include <cmath>

int main() {
//    auto *modelo = new Model();
//    auto *q1 = new System(100.0);
//    auto *q2 = new System(0.0);
//    auto *q3 = new System(100.0);
//    auto *q4 = new System(0.0);
//    auto *q5 = new System(0.0);
//    auto *f1 = new Flux(q4, q1, "result = 0.01 * source");
//    auto *f2 = new Flux(q1, q2, "result = 0.01 * source");
//    auto *f3 = new Flux(q1, q3, "result = 0.01 * source");
//    auto *f4 = new Flux(q2, q3, "result = 0.01 * source");
//    auto *f5 = new Flux(q3, q4, "result = 0.01 * source");
//    auto *f6 = new Flux(q2, q5, "result = 0.01 * source");
//
//
//    modelo->add(f1);
//    modelo->add(f2);
//    modelo->add(f3);
//    modelo->add(f4);
//    modelo->add(f5);
//    modelo->add(f6);
//
//    modelo->execute(0, 100);
//
//    std::cout.precision(50);
//
//
//    std::cout << q1->getValue() << std::endl;
//    std::cout << q2->getValue() << std::endl;
//    std::cout << q3->getValue() << std::endl;
//    std::cout << q4->getValue() << std::endl;
//    std::cout << q5->getValue() << std::endl;
//
//    assert(fabs(q1->getValue() - 31.8513) < 0.0001);
//    assert(fabs(q2->getValue() - 18.4003) < 0.0001);
//    assert(fabs(q3->getValue() - 77.1143) < 0.0001);
//    assert(fabs(q4->getValue() - 56.1728) < 0.0001);
//    assert(fabs(q5->getValue() - 16.4612) < 0.0001);
//


    funcional_test::exponentialTest();
    funcional_test::LogTest();
    funcional_test::ultimateTest();
    return 0;
}
