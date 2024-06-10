//
// Created by VULCA on 10/6/2024.
//
#pragma once

#include "useful_header_file.h"

using namespace std;

class Point {
public:
    void set_x_and_y();

    double get_x();

    double get_y();

private:
    double x, y;
};
