//
// Created by VULCA on 9/6/2024.
//
#include "useful_header_file.h"

using namespace std;


int main() {
    int a = 10;
    int &b = a;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    a = 20;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    b = 30;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    int number_01 = 10;
//    int &number_02 = nullptr;
//    number_02 = number_01;
    int &number_02 = number_01;

    double number_03 = 11.11;
    double &number_04 = number_03;
    cout << "number_03=" << number_03 << endl;
    cout << "number_04=" << number_04 << endl;
    number_03 = 22.22;
    cout << "number_03=" << number_03 << endl;
    cout << "number_04=" << number_04 << endl;
    number_04 = 33.33;
    cout << "number_03=" << number_03 << endl;
    cout << "number_04=" << number_04 << endl;
    return 0;
}