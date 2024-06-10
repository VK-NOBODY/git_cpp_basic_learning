//
// Created by VULCA on 9/6/2024.
//
#include "header_files/useful_header_file.h"

using namespace std;
const double PI = 3.14;

//Design a circle class and find the circumference of the circle
//Formula for finding the circumference of a circle: 2*PI*radius
//class represents designing a class, and what follows the class is the class name.
class Circle {
public:
    //Design a member function of a class, the function name is get_circumference
    //The parameter of the function is the radius
    //The return value of the function is the perimeter
    double radius;

    double get_circumference() {
        return 2 * PI * radius;
    }
};

int main() {
    //Create a specific circle (object through the circle class)
    //Instantiation (the process of creating an object through a class)
    Circle circle;
    circle.radius = 10;
    cout << "The circumference of the circle is " << circle.get_circumference() << endl;
    return 0;
}