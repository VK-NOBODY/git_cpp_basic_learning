//
// Created by VULCA on 4/6/2024.
//
#include "header_files/useful_header_file.h"

using namespace std;

int main() {

//    int *p_array = new int[10]{3, 5, 1, 11, 99, 66, 22, 2, 8, 6};
//    int *p_temp = new int;
//    for (int i = 0; i < 10; ++i) {
//        for (int j = i + 1; j < 10; ++j) {
//            if (p_array[i] > p_array[j]) {
//                *p_temp = p_array[i];
//                p_array[i] = p_array[j];
//                p_array[j] = *p_temp;
//            }
//        }
//    }
//    for (int i = 0; i < 10; ++i) {
//        cout << p_array[i] << endl;
//    }
//    delete[] p_array;
//    delete p_temp;

//    int *p_array = new int[10]{3, 5, 1, 11, 99, 66, 22, 2, 8, 6};
//    int *p_temp = new int;
//    for (int i = 0; i < 10; ++i) {
//        for (int j = 0; j < 10; ++j) {
//            if (p_array[i] > p_array[j]) {
//                *p_temp = p_array[i];
//                p_array[i] = p_array[j];
//                p_array[j] = *p_temp;
//            }
//            for (int k = 0; k < 10; ++k) {
//                cout << p_array[k] << " \t";
//            }
//            cout << endl;
//        }
//    }
//
//    delete[] p_array;
//    delete p_temp;

    int *p_array = new int[10]{3, 5, 1, 11, 99, 66, 22, 2, 8, 6};
    int *p_temp = new int;
    for (int i = 0; i < 10; ++i) {
        for (int j = i + 1; j < 10; ++j) {
            if (p_array[i] > p_array[j]) {
                *p_temp = p_array[i];
                p_array[i] = p_array[j];
                p_array[j] = *p_temp;
            }
            for (int k = 0; k < 10; ++k) {
                cout << p_array[k] << " \t";
            }
            cout << endl;
        }
    }
    delete[] p_array;
    delete p_temp;
    return 0;
}


