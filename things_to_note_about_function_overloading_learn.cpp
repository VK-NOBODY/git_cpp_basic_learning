//
// Created by VULCA on 9/6/2024.
//
#include "useful_header_file.h"

using namespace std;

//1. Reference as a condition for overloading
void function_01(int &a) {
    cout << "function_01(int &a)" << endl;
}

void function_01(const int &a) {
    cout << "function_01(const int &a)" << endl;
}

//2. Function overloading encounters default parameters
void function_02(int a) {
    cout << "function_02(int a)" << endl;
}

//void function_02(int a, int b = 10) {
//    cout << "function_02(int a,int b)" << endl;
//}

int main() {
    int a = 10;
    function_01(a);
    function_01(10);
    function_02(a);
//    function_02(a, 20);
    return 0;
}