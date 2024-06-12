//
// Created by VULCA on 10/6/2024.
//
#include "useful_header_file.h"

using namespace std;

class Cube {
public:
    void set_cube_length() {
        double length;
        cout << "Enter the length of the cube: ";
        cin >> length;
        if (length <= 0) {
            cout << "Invalid length. Please enter a positive number." << endl;
            set_cube_length();
        } else {
            cube_length = length;
        }
    }

    double get_cube_length() {
        return cube_length;
    }

    void set_cube_width() {
        double width;
        cout << "Enter the width of the cube: ";
        cin >> width;
        if (width <= 0) {
            cout << "Invalid width. Please enter a positive number." << endl;
            set_cube_width();
        } else {
            cube_width = width;
        }
    }

    double get_cube_width() {
        return cube_width;
    }

    void set_cube_height() {
        double height;
        cout << "Enter the height of the cube: ";
        cin >> height;
        if (height <= 0) {
            cout << "Invalid height. Please enter a positive number." << endl;
            set_cube_height();
        } else {
            cube_height = height;
        }
    }

    double get_cube_height() {
        return cube_height;
    }

    double get_cube_volume() {
        return cube_length * cube_width * cube_height;
    }

    double get_cube_surface_area() {
        return 2 * (cube_length * cube_width + cube_length * cube_height + cube_width * cube_height);
    }

    void print_cube_info() {
        cout << "Cube Length: " << cube_length << endl;
        cout << "Cube Width: " << cube_width << endl;
        cout << "Cube Height: " << cube_height << endl;
        cout << "Cube Volume: " << get_cube_volume() << endl;
        cout << "Cube Surface Area: " << get_cube_surface_area() << endl;
    }

    bool is_cube_same_by_class(Cube &cube_03) {
        return cube_length == cube_03.get_cube_length() &&
               cube_width == cube_03.get_cube_width() &&
               cube_height == cube_03.get_cube_height();
    }

private:
    double cube_length;
    double cube_width;
    double cube_height;
};

bool is_cube_same(Cube cube_01, Cube cube_02) {
    return cube_01.get_cube_length() == cube_02.get_cube_length() &&
           cube_01.get_cube_width() == cube_02.get_cube_width() &&
           cube_01.get_cube_height() == cube_02.get_cube_height();
}

int main() {
    Cube cube;
    cube.set_cube_length();
    cube.set_cube_width();
    cube.set_cube_height();
//    cout << "Cube Information:" << endl;
//    cube.print_cube_info();
    Cube cube_02;
    cube_02.set_cube_length();
    cube_02.set_cube_width();
    cube_02.set_cube_height();
    if (is_cube_same(cube, cube_02)) {
        cout << "The two cubes are the same." << endl;
    } else {
        cout << "The two cubes are not the same." << endl;
    }
    Cube cube_03 = cube_02;
    if (cube.is_cube_same_by_class(cube_03)) {
        cout << "The two cubes are the same." << endl;
    } else {
        cout << "The two cubes are not the same." << endl;
    }
    return 0;
}