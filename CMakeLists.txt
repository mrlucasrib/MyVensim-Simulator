cmake_minimum_required(VERSION 3.17)
project(MyVensim)

set(CMAKE_CXX_STANDARD 14)

include_directories(lua54)
include_directories(lua54/include)
include_directories(src)

add_executable(MyVensim
        lua54/include/lauxlib.h
        lua54/include/lua.h
        lua54/include/lua.hpp
        lua54/include/luaconf.h
        lua54/include/lualib.h
        src/flux.cpp
        src/flux.h
        src/main.cpp
        src/model.cpp
        src/model.h
        src/system.cpp
        src/system.h
        test/funcional_test.cpp
        )
target_link_libraries(MyVensim ${CMAKE_SOURCE_DIR}/lua54/liblua54.a)
