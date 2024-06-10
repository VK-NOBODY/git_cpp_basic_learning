//
// Created by VULCA on 4/6/2024.
//
#include "header_files/useful_header_file.h"

using namespace std;

int main() {

    int *p_array = new int[5]{1, 3, 5, 7, 9};

    int *p_new_array = new int[4];
    for (int i = 0; i < 5; ++i) {
        if (i == 2) {
            continue;
        }
        if (i > 2) {
            p_new_array[i - 1] = p_array[i];
        } else {
            p_new_array[i] = p_array[i];
        }
    }
    delete[] p_array;
    p_array = p_new_array;
    for (int i = 0; i < 4; ++i) {
        cout << "The elements in the new array are: " << p_new_array[i] << endl;
        cout << "The elements in the original array are: " << p_array[i] << endl;
    }
    delete[] p_new_array;
    return 0;
}