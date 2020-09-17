cmake_minimum_required(VERSION 3.17)
project(MyVensim)
set(CMAKE_CXX_STANDARD 14)

include_directories(src)
#include_directories(test)
#include_directories(test/functional_tests)
#include_directories(test/unit_tests)

add_executable(MyVensim
        src/flow.h
        src/flowImpl.cpp
        src/flowImpl.h
        src/model.h
        src/modelImpl.cpp
        src/modelImpl.h
        src/system.h
        src/systemImpl.cpp
        src/systemImpl.h
        test/functional_tests/funcional_test.cpp
        test/functional_tests/funcional_test.h
        test/unit_tests/flux_test.cpp
        test/unit_tests/flux_test.h
        test/unit_tests/model_test.cpp
        test/unit_tests/model_test.h
        test/unit_tests/system_test.cpp
        test/unit_tests/system_test.h
        test/flow_concret.cpp
        test/flow_concret.h
        test/runTests.cpp
        test/runTests.h
        )
