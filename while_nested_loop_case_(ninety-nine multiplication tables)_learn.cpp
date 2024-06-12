//
// Created by VULCA on 2/6/2024.
//
#include "useful_header_file.h"

using namespace std;

int main() {
//// 1. Output nine lines through the outer loop
//    for (int i = 1; i <= 9; i++) {
//        // 2. Output nine columns through the inner loop
//        for (int j = 1; j <= i; j++) {
//            // 3. Output the multiplication table
//            cout << j << "x" << i << "=" << j * i << "\t";
//        }
//        // 4. Line break
//        cout << "\t" << endl;
//    }
    int i = 1;
    while (i <= 9) {
        int j = 1;
        while (j <= i) {
            cout << j << "x" << i << "=" << j * i << "\t";
            j++;
        }
        cout << "\t" << endl;
        i++;
    }
    return 0;
}