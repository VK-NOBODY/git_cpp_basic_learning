//
// Created by VULCA on 3/6/2024.
//
#include "useful_header_file.h"

using namespace std;

int main() {
    int array[5];// declare array

    array[0] = 1;// initialize array
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
    array[4] = 5;
    for (int i = 0; i < 5; i++) {// print array
        cout << "Array: " << i << ",value: " << array[i] << "\t" << endl;
    }
    return 0;
}