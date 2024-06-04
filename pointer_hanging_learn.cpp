//
// Created by VULCA on 4/6/2024.
//
#include "useful_header_file.h"

using namespace std;

int main() {

    int *p_01 = new int;
    *p_01 = 10;

    int *p_02 = p_01;
    cout << "The value of the memory area pointed to by the p_01 pointer is: " << *p_01 << endl;
    delete p_01;
//    cout << "The value of the memory area pointed to by the p_02 pointer is: " << *p_02 << endl;
//    *p_02 = 20;
    return 0;
}