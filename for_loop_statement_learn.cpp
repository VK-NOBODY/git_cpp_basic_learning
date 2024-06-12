//
// Created by VULCA on 2/6/2024.
//
#include "useful_header_file.h"

using namespace std;

int main() {

//    for (int number = 1; number <= 10; ++number) {
//        cout << number << "\t" << endl;
//    }

//    for (int i = 1; i <= 20; i += 2) {
//        cout << i << "\t" << endl;
//    }
//
//    for (int i = 0;; ++i) {
//        cout << i << endl;
//    }

    //The creation of loop control factors can be omitted
    //Although it can be omitted, generally you can't do without the loop control factor, so don't omit it.
    int number = 1;
    for (; number <= 100; ++number) {
        cout << number << endl;
    }
    return 0;
}