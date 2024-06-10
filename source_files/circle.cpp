//
// Created by VULCA on 10/6/2024.
//
#include "../header_files/circle.h"

using namespace std;

void Circle::set_center() {
    cout << "Enter the center of the circle: ";
    center.set_x_and_y();
}


Point Circle::get_center() {
    return center;
}

void Circle::set_radius() {
    double tmp_radius;
    cout << "Enter the radius of the circle: ";
    cin >> tmp_radius;
    if (tmp_radius >= 0) {
        radius = tmp_radius;
    }
}

double Circle::get_radius() {
    return radius;
}

