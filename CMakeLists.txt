cmake_minimum_required(VERSION 3.25)
project(1_Introduction)

set(CMAKE_CXX_STANDARD 20)

add_executable(1_Introduction main.cpp include/Vector4D.h src/Vector4D.cpp include/Brane.h src/Brane.cpp include/Signal.h src/Signal.cpp include/Observer.h src/Observer.cpp)
