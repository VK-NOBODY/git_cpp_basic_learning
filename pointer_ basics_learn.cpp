//
// Created by VULCA on 4/6/2024.
//
#include "useful_header_file.h"

using namespace std;

int main() {

    int number = 10;
    int *p;
    p = &number;
    cout << "&number takes the address: " << &number << endl;
    cout << "The address of the record in pointer variable p is: " << p << endl;
    cout << "Get the value stored in the pointer variable record address as: " << *p << endl;

    *p = 20;
    cout << "After *p assignment, the result is: " << *p << endl;
    cout << "number result: " << number << endl;
    return 0;
}