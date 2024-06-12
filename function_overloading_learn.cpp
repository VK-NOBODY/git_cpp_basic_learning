//
// Created by VULCA on 9/6/2024.
//
#include "useful_header_file.h"

using namespace std;

//Function overloading
//You can make the function names the same to improve reusability
//Satisfying conditions for function overloading
//1. Under the same scope
//2. The function names are the same
//3. Function parameter types are different, or the number is different, or the order is different
void function_01() {
    cout << "Call of function_01!" << endl;
}

void function_01(int a) {
    cout << "Call of function_01(int a)!" << endl;
}

void function_01(double a) {
    cout << "Call of function_01(double a)!" << endl;
}

void function_01(double a, int b) {
    cout << "Call of function_01(double a,int b)!" << endl;
}

void function_01(int a, double b) {
    cout << "Call of function_01(int  a,double b)!" << endl;
}

//Precautions
//The return value of a function cannot be used as a condition for function overloading
//int function_01(int a, double b) {
//    cout << "Call of function_01(int  a,double b)!" << endl;
//}

int main() {
    function_01();
    function_01(10);
    function_01(10.10);
    function_01(10.10, 10);
    function_01(10, 10.10);
    return 0;
}