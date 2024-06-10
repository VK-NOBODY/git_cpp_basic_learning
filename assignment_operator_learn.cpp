//
// Created by VULCA on 31/5/2024.
//
#include "header_files/useful_header_file.h"

using namespace std;

int main() {

    int num_01 = 2;
    num_01 = num_01 + 3;
    cout << num_01 << endl;
    num_01 += 3; //Equivalent to num_01 = num_01 + 3
    cout << num_01 << endl;

    num_01 -= 3;
    cout << num_01 << endl;

    num_01 *= 5;
    cout << num_01 << endl;

    num_01 /= 5;
    cout << num_01 << endl;

    num_01 %= 3;
    cout << num_01 << endl;
    return 0;
}