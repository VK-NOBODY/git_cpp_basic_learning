//
// Created by VULCA on 30/5/2024.
//
#include "useful_header_file.h"

using namespace std;

int main() {
    cout << "The number of bytes for 10 is: " << sizeof(10) << endl;
    cout << "The number of bytes for 9999999999 is:" << sizeof(9999999999) << endl;
    cout << "The number of bytes for 3.14 is:" << sizeof(3.14) << endl;

    cout << "The number of bytes for 10L is: " << sizeof(10L) << endl;
    cout << "The number of bytes for 3.14F is: " << sizeof(3.14F) << endl;
    cout << "The number of bytes for 3.14 is: " << sizeof(3.14) << endl;
    return 0;


}