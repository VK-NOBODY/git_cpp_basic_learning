//
// Created by VULCA on 10/6/2024.
//
#include "header_files/useful_header_file.h"

using namespace std;

class Point {
public:
    void set_x_and_y() {
        double tmp_x, tmp_y;
        cout << "Enter x : ";
        cin >> tmp_x ;
        cout << "Enter y : ";
        cin >> tmp_y;
        if (tmp_x >= 0 && tmp_y >= 0) {
            x = tmp_x;
            y = tmp_y;
        }
    }

    double get_x() {
        return x;
    }

    double get_y() {
        return y;
    }

private:
    double x, y;
};

class Circle {
public:
    void set_center() {
        cout << "Enter the center of the circle: ";
        center.set_x_and_y();
    }

//    void get_center() {
//        cout << "Center of the circle is: (" << center.get_x() << ", " << center.get_y() << ")" << endl;
//    }
    Point get_center() {
        return center;
    }

    void set_radius() {
        double tmp_radius;
        cout << "Enter the radius of the circle: ";
        cin >> tmp_radius;
        if (tmp_radius >= 0) {
            radius = tmp_radius;
        }
    }

    double get_radius() {
        return radius;
    }

private:
    double radius;
    Point center;
};

bool is_in_circle(Point point, Circle circle) {
    double distance = sqrt(
            pow(point.get_x() - circle.get_center().get_x(), 2) + pow(point.get_y() - circle.get_center().get_y(), 2));
    if (distance <= circle.get_radius()) {
        return true;
    } else {
        return false;
    }
}

int main() {
    Circle circle;
    circle.set_center();
    cout << "The center of the circle is: (" << circle.get_center().get_x() << ", " << circle.get_center().get_y()
         << ")" << endl;
    circle.set_radius();
    cout << "The radius of the circle is: " << circle.get_radius() << endl;
    Point point;
    point.set_x_and_y();
    if (is_in_circle(point, circle)) {
        cout << "The point is in the circle." << endl;
    } else {
        cout << "The point is not in the circle." << endl;
    }
    return 0;
}