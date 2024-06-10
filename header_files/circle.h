//
// Created by VULCA on 10/6/2024.
//
#pragma once
#include "point.h"

using namespace std;

class Circle {
public:
    void set_center();

    Point get_center();

    void set_radius();

    double get_radius();

private:
    double radius;
    Point center;
};
