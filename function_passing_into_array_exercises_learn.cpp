//
// Created by VULCA on 7/6/2024.
//
#include "useful_header_file.h"

using namespace std;

void min_to_max(int *const array, int *const length) {
    for (int i = 0; i < *length - 1; i++) {
        for (int j = i + 1; j < *length; j++) {
            if (array[i] > array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

int main() {
    int *array = new int[5]{33, 55, 11, 22, 44};
    int *array_length = new int(5);
    for (int i = 0; i < *array_length; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
    min_to_max(array, array_length);
    for (int i = 0; i < *array_length; i++) {
        cout << array[i] << " ";
    }
    delete[] array;
    array = nullptr;
    delete array_length;
    array_length = nullptr;
    return 0;
}