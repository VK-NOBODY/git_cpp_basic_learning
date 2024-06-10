//
// Created by VULCA on 7/6/2024.
//
#include "header_files/useful_header_file.h"

using namespace std;

void switch_number(int a, int b) {
    int tmp = a;
    a = b;
    b = tmp;
}

void switch_number_pointer(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {
    int *x = new int(1);
    int *y = new int(2);
    switch_number(*x, *y);
    cout << "x= " << *x << " y= " << *y << endl;
    switch_number_pointer(x, y);
    cout << "x= " << *x << " y= " << *y << endl;
    delete x;
    x = nullptr;
    delete y;
    y = nullptr;
    return 0;
}