//
// Created by VULCA on 7/6/2024.
//
#include "useful_header_file.h"

using namespace std;

void function_01(int const array[5], int *const array_length) {
    cout << "The total size of the arrays counted in the function_01 function is: " << *array_length << endl;
    cout << "array_length: " << *array_length << endl;
//    for (int i = 0; i < *array_length; i++) {
//        cout << "The value of the array is: " << array[i] << endl;
//    }
}

int main() {
    int *array = new int[]{1, 2, 3, 4, 5};
    int *array_length = new int(5);
    cout << "The total size of the array counted in the main function is: " << *array_length << endl;
    function_01(array, array_length);
    delete[] array;
    array = nullptr;
    delete array_length;
    array_length = nullptr;
    return 0;
}