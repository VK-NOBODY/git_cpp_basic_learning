//
// Created by VULCA on 4/6/2024.
//
#include "useful_header_file.h"

using namespace std;

int main() {

    int *p = new int;
    *p = 10;
    cout << "The 4-byte space applied for by new is stored in: " << *p << endl;
    delete p;

    int *p_array = new int[5];
    p_array[0] = 10;
    p_array[1] = 20;
    p_array[2] = 30;
    p_array[3] = 40;
    p_array[4] = 50;
    for (int i = 0; i < 5; i++) {
        cout << "The " << i << "-th element of the array is: " << p_array[i] << endl;
    }
    delete[] p_array;
    return 0;
}