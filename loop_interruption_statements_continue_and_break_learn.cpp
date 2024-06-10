//
// Created by VULCA on 3/6/2024.
//
#include "header_files/useful_header_file.h"

using namespace std;

int main() {

//    for (int i = 1; i <= 20; ++i) {
//        if (i % 2 == 0) {
//            continue;
//        }
//        cout << i << endl;
//    }
//    for (int i = 1; true; ++i) {
//        cout << i << endl;
//        if (i == 20) {
//            break;
//        }
//    }
    for (int i = 1;; ++i) {
        if (!(i % 2 == 0)) {
            continue;
        }
        cout << i << endl;
        if (i == 300) {
            break;
        }
    }

    return 0;
}