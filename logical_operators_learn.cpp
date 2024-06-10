//
// Created by VULCA on 1/6/2024.
//
#include "header_files/useful_header_file.h"

using namespace std;

int main() {
    // ! No
    bool example_01 = !(1 == 1);
    bool example_02 = !(1 == 2);
    cout << example_01 << endl;
    cout << example_02 << endl;

    // && and
    bool example_03 = 1 == 1 && 2 == 2;
    bool example_04 = 1 == 2 && 2 == 2;
    cout << example_03 << endl;
    cout << example_04 << endl;

    // || or
    bool example_05 = 1 == 1 || 1 == 2;
    bool example_06 = 1 == 2 || 1 == 2;
    cout << example_05 << endl;
    cout << example_06 << endl;

    return 0;
}