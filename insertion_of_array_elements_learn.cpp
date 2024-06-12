//
// Created by VULCA on 4/6/2024.
//
#include "useful_header_file.h"

using namespace std;

int main() {

    int *p_array = new int[5]{1, 3, 5, 7, 9};
    int *p_new_array = new int[7];
    int offset = 0;
    for (int i = 0; i < 7; ++i) {
        if (i == 1) {
            p_new_array[i] = 11;
            ++offset;
            continue;
        } else if (i == 3) {
            p_new_array[i] = 66;
            ++offset;
            continue;
        } else {
            p_new_array[i] = p_array[i - offset];
        }
    }
    for (int i = 0; i < 7; ++i) {
        cout << p_new_array[i] << endl;
    }
    delete[] p_array;
    delete[] p_new_array;

    return 0;
}