//
// Created by VULCA on 4/6/2024.
//
#include "useful_header_file.h"

using namespace std;

int main() {

//    int number = 10;
//    int *p = &number;
//    cout << p << endl;
//    p++;
//    cout << p << endl;
    int number = 10;
    int *p = &number;
    cout << "The address recorded in the pointer variable p is: " << p << endl;
    ++p;
    cout << "The pointer variable p has been operated by +1, and the recorded address is: " << p << endl;

    double number_02 = 10;
    double *p_02 = &number_02;
    cout << "The address recorded in the pointer variable p_02 is: " << p_02 << endl;
    p_02 += 4;
    cout << "The pointer variable p_02 has been operated by +1, and the recorded address is: " << p_02 << endl;

    int v[] = {1, 2, 3, 4, 5};
    int *vp = v;//The pointer records the address of the array 0 subscript element
    cout << "The first element of the array is: " << *vp << endl;
    cout << "The first element of the array is: " << v[0] << endl;

    cout << "The second element of the array is: " << *(vp + 1) << endl;
    cout << "The second element of the array is: " << v[1] << endl;

    *(vp + 2) = 33;
    cout << "The third element of the array is: " << *(vp + 2) << endl;
    cout << "The third element of the array is: " << v[2] << endl;

    return 0;
}