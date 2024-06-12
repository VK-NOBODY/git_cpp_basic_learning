//
// Created by VULCA on 9/6/2024.
//
#include "useful_header_file.h"

using namespace std;

//Print data function
void print_data(const int &a) {
//    a = 1000;
    cout << "a = " << a << endl;
}

int main() {
//    int a = 10;
//    const int &ref = 10;
//    ref=20;
    int a = 100;
    print_data(a);
    cout << "a = " << a << endl;

    return 0;
}