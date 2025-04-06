cmake_minimum_required(VERSION 3.21)
project(qtactions VERSION 0.1.0 LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt6 REQUIRED COMPONENTS Core)
find_package(Qt6 REQUIRED COMPONENTS Sql)
find_package(Qt6 REQUIRED COMPONENTS Widgets)
qt_standard_project_setup(REQUIRES 6.8)

qt_add_executable(qtactions main.cpp)
target_link_libraries(qtactions PUBLIC Qt6::Core Qt6::Widgets)
