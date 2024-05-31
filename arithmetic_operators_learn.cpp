//
// Created by VULCA on 31/5/2024.
//
#include "useful_header_file.h"

using namespace std;

int main() {
// Unary (only one operand) operators: +, -
    int num_01 = +10;
    int num_02 = -10;
    cout << num_01 << "," << num_02 << endl;
//Binary (with 2 operands) operators: +,-,*,/,%
    int num_03 = 5 + 5;
    int num_04 = 5 - 3;
    int num_05 = 5 * 5;
    int num_06 = 10 / 3;
    int num_07 = 10 % 3;
    cout << "5+5= " << num_03 << endl;
    cout << "5-3= " << num_04 << endl;
    cout << "5*5= " << num_05 << endl;
    cout << "10/3= " << num_06 << endl;
    cout << "10%3= " << num_07 << endl;

    int a = 2;
    int b = ++a;
    cout << "a= " << a << ",b= " << b << endl;

    int c = 2;
    int d = c++;
    cout << "c= " << c << ",d= " << d << endl;

    int e = 2;
    int f = --e;
    cout << "e= " << e << ",f= " << f << endl;

    int g = 2;
    int h = g--;
    cout << "g= " << g << ",h= " << h << endl;

    return 0;
}