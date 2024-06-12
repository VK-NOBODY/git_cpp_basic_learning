//
// Created by VULCA on 9/6/2024.
//
#include "useful_header_file.h"

using namespace std;

void function_01(int &ref) {
    ref = 100;
}

int main() {
    int a = 10;
    int &ref = a;//The essence of a reference is a pointer constant. Once the reference is initialized, it cannot be changed.
    ref = 20;
    cout << "a: " << a << endl;
    cout << "ref: " << ref << endl;
    function_01(a);
    cout << "a: " << a << endl;
    cout << "ref: " << ref << endl;
    return 0;
}