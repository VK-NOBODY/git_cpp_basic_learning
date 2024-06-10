cmake_minimum_required(VERSION 3.28)
project(git_learning)

set(CMAKE_CXX_STANDARD 17)

add_executable(git_learning packaging-design_case_2-point_and_circle_relationship_learn.cpp
        source_files/circle.cpp
        source_files/point.cpp)
