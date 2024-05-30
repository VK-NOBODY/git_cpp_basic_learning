//
// Created by VULCA on 30/5/2024.
//
#include "useful_header_file.h"

using namespace std;

int main() {
    //float single precision floating point number
    float num1 = 1234567890;
    float num2 = 1.234567890;
    cout << fixed;
    cout.width(20);
    cout << num1 << endl;
    cout << num2 << "," << sizeof(num2) << endl;
    //double double precision floating point number
    double num3 = 1234567890.1234567890;
    cout << num3 << "," << sizeof(num3) << endl;

    //long double long precision floating point number
    long double num4 = 1234567890.1234567890;
    cout << num4 << "," << sizeof(num4) << endl;

    return 0;
}