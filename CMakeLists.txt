cmake_minimum_required(VERSION 3.17)
project(MyVensim)

set(CMAKE_CXX_STANDARD 20)

include_directories(src)

add_executable(MyVensim
        src/fluxImpl.cpp
        src/fluxImpl.h
        src/modelImpl.cpp
        src/modelImpl.h
        src/systemImpl.cpp
        src/systemImpl.h
        test/functional_tests/funcional_test.cpp
        test/unit_tests/system_test.cpp test/unit_tests/system_test.h test/unit_tests/flux_test.cpp test/unit_tests/flux_test.h test/unit_tests/model_test.cpp test/unit_tests/model_test.h test/flux_concret.cpp test/flux_concret.h test/runTests.cpp test/runTests.h)
