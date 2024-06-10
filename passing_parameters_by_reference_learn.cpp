//
// Created by VULCA on 9/6/2024.
//
#include "header_files/useful_header_file.h"

using namespace std;

void switch_number(int a, int b) {
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

void switch_number_pointer(int *a, int *b) {
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void switch_number_reference(int &a, int &b) {
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

int main() {

    int a = 1, b = 2;
    cout << "a = " << a << ", b = " << b << endl;
    switch_number(a, b);
    cout << "a = " << a << ", b = " << b << endl;
    switch_number_pointer(&a, &b);
    cout << "a = " << a << ", b = " << b << endl;
    switch_number_reference(a, b);
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}