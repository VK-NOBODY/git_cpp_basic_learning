//
// Created by VULCA on 9/6/2024.
//
#include "header_files/useful_header_file.h"

using namespace std;

// Placeholder parameters can also have default values
void function_01(int a, int = 10) {
    cout << "this is function_01" << endl;
}

int main() {
    function_01(10, 10);
    return 0;
}