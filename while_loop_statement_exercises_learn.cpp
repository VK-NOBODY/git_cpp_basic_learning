//
// Created by VULCA on 2/6/2024.
//
#include "header_files/useful_header_file.h"

using namespace std;

int main() {

//while loop, 100 times, each time there is a variable, the variable value is 1 for the first time, 2 for the second time, 3 for the third time, 4 for the fourth time, and so on, until 100 times
    short number = 0;
    short control_flag = 1;
    while (control_flag <= 100) {
        number += control_flag++;
        cout << "number=" << number << endl;
    }
    return 0;
}