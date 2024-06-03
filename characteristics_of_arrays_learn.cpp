//
// Created by VULCA on 3/6/2024.
//
#include "useful_header_file.h"

using namespace std;

int main() {
// Feature 1: Arrays can be constructed of any type
    cout << "Feature 1: Arrays can be constructed of any type-----------------------" << endl;
    float v1[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double v2[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char v3[] = {'a', 'b', 1, 2, 3};
    string v4[] = {"Lin Zhiling", "Cai Yilin", "Liu Yifei"};
    bool v5[] = {true, 0, 1, true, false};
    enum Color {
        RED, GREEN, BLUE
    };
    Color v6[] = {RED, GREEN, BLUE, GREEN, BLUE};

    cout << "The first element of the float array:" << v1[0] << endl;
    cout << "The first element of the double array:" << v2[0] << endl;
    cout << "The first element of the char array:" << v3[0] << endl;
    cout << "The first element of the string array:" << v4[0] << endl;
    cout << "The first element of the bool array:" << v5[0] << endl;
    cout << "The first element of the enumeration array:" << v6[0] << endl;
    cout << endl;

    //Feature 2: Fixed size (no bounds checking)
    cout << "Feature 2: Fixed size (no bounds checking) -----------------------" << endl;
    int v7[] = {1, 2, 3, 4, 5};
// cout << "Access the 10th subscript of the v7 array:" << v7[10] << endl;
// v7[100] = 10;
    cout << endl;

    //Feature 3: The memory is continuous and ordered, and the array length can be obtained through sizeof(array)/sizeof(array element)
    cout << "Feature 3: Memory is continuous and ordered-----------------------" << endl;
    cout << "The first element of the v7 array is:" << v7[0] << endl;
    cout << "The first element of the v7 array is:" << v7[0] << endl;
    cout << "The first element of the v7 array is:" << v7[0] << endl;

    cout << "V7 array space occupied size:" << sizeof(v7) << "Bytes" << endl;
    cout << "The space occupied by the first element of the v7 array:" << sizeof(v7[0]) << "Bytes" << endl;
    cout << "The v7 array has several elements:" << sizeof(v7) / sizeof(v7[0]) << endl;
    cout << endl;

    // Feature 4: Element values can be modified
    cout << "Feature 4: Element values can be modified-----------------------" << endl;
    int v8[] = {1, 2, 3, 4, 5};
    cout << "Before modification, the value of the subscript 0 element of v8 is:" << v8[0] << endl;
    cout << "Before modification, the value of the subscript 1 element of v8 is:" << v8[1] << endl;
    v8[0] = 11;
    v8[1] = 66;
    cout << "After modification, the value of the subscript 0 element of v8 is:" << v8[0] << endl;
    cout << "After modification, the value of the subscript 1 element of v8 is:" << v8[1] << endl;
    cout << endl;

    //Feature 5: The array variable itself does not record data
    cout << "Feature 5: The array variable itself does not record data-----------------------" << endl;
    int v9[] = {1, 2, 3, 4, 5};
    cout << "Cout the variable v9 directly:" << v9 << endl;
    // The v9 variable itself records the memory address, which is the address of element 0 of v9
    cout << endl;

    return 0;
}