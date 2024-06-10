//
// Created by VULCA on 4/6/2024.
//
#include "header_files/useful_header_file.h"

using namespace std;

int main() {

    int *p_array = new
            int[10]{3, 5, 1, 11, 99, 66, 22, 2, 8, 6};
    int *p_new_array = new int[8];
    int offset = 0;
    for (int i = 0; i < 10; ++i) {
        if (i == 0 || i == 5) {
            ++offset;
            continue;
        } else {
            p_new_array[i - offset] = p_array[i];
        }
    }
    delete[] p_array;
    cout << "The new array is: ";
    for (int i = 0; i < 8; ++i) {
        cout << p_new_array[i] << " ";
    }
    delete[] p_new_array;
    return 0;
}