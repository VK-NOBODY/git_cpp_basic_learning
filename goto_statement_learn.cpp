//
// Created by VULCA on 3/6/2024.
//
#include "header_files/useful_header_file.h"

using namespace std;

int main() {

    int i = 1;
    loop:
    cout << i << endl;
    if (i < 10) {
        ++i;
        goto loop;
    }
    return 0;
}