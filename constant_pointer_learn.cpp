//
// Created by VULCA on 4/6/2024.
//
#include "useful_header_file.h"

using namespace std;

int main() {

//    int number_01 = 10, number_02 = 100;
//    const int *p = &number_01;
//    *p = 20;
//    p = &number_02;

    int number_01 = 10, number_02 = 100;

//    const int *p_01 = &number_01;
//    cout << "The data currently pointed to by pointer p_01 is: " << *p_01 << endl;
//// *p_01=20;
//    p_01 = &number_02;
//    cout << "The data currently pointed to by pointer p_01 is: " << *p_01 << endl;

//    int *const p_01 = &number_01;
//    cout << "The data currently pointed to by pointer p_01 is: " << *p_01 << endl;
//    *p_01 = 20;
//    cout << "The data currently pointed to by pointer p_01 is: " << *p_01 << endl;
//    p_01 = &number_02;

    const int *const p_01 = &number_01;
    cout << "The data currently pointed to by pointer p_01 is: " << *p_01 << endl;
//    p_01 = &number_02;
//    *p_01 = 20;

    return 0;
}