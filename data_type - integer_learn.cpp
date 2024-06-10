//
// Created by VULCA on 30/5/2024.
//
#include "header_files/useful_header_file.h"

using namespace std;

int main() {
    short age = 21;
    cout << age << endl;
    int num1 = 10;
    long num2 = 20;
    long long num3 = 30;
    cout << num1 << num2 << num3 << endl;

    cout << "short variable, occupies bytes:" << sizeof(age) << endl;
    cout << "int variable, occupies bytes:" << sizeof(num1) << endl;
    cout << "long variable, occupies bytes:" << sizeof(num2) << endl;
    cout << "long long variable, occupies bytes:" << sizeof(num3) << endl;
    return 0;
}