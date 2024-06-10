//
// Created by VULCA on 9/6/2024.
//
#include "header_files/useful_header_file.h"

using namespace std;

int *add(int a, int b) {
    static int p;
    p = a + b;
    return &p;
}

int main() {
    int *p = add(1, 2);
    cout << *p << endl;
    return 0;
}