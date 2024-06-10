//
// Created by VULCA on 10/6/2024.
//
#include "../header_files/point.h"

using namespace std;

void Point::set_x_and_y() {
    double tmp_x, tmp_y;
    cout << "Enter x : ";
    cin >> tmp_x;
    cout << "Enter y : ";
    cin >> tmp_y;
    if (tmp_x >= 0 && tmp_y >= 0) {
        x = tmp_x;
        y = tmp_y;
    }
}

double Point::get_x() {
    return x;
}

double Point::get_y() {
    return y;
}

