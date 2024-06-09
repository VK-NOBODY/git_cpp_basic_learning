//
// Created by VULCA on 9/6/2024.
//
#include "useful_header_file.h"

using namespace std;

int *function_01() {
    int array[] = {1, 2, 3};
    return array;
}

int *function_02() {
    static int array[] = {1, 2, 3};
    return array;
}

int *function_03() {
    int *array = new int[3]{1, 2, 3};
    return array;
}

int main() {

//    int *array = function_01();
//    for (int i = 0; i < 3; ++i) {
//        cout << array[i] << endl;
//    }
//    delete[] array;
//    cout << endl;
    int *array_02 = function_02();
    for (int i = 0; i < 3; ++i) {
        cout << array_02[i] << endl;
    }
    cout << endl;
    int *array_03 = function_03();
    for (int i = 0; i < 3; ++i) {
        cout << array_03[i] << endl;
    }
    delete[] array_03;
    cout << endl;
    return 0;
}