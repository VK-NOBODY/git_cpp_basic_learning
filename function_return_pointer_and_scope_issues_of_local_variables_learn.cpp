//
// Created by VULCA on 9/6/2024.
//
#include "header_files/useful_header_file.h"

using namespace std;

int *add(int a, int b) {
    int *sum = new int;
    *sum = a + b;
    return sum;
}

int main() {
    int *result_01 = add(10, 20);
    cout << "result_01: " << *result_01 << endl;
    delete result_01;
    result_01 = nullptr;
    return 0;
}