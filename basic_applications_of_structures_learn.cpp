//
// Created by VULCA on 5/6/2024.
//
#include "useful_header_file.h"

using namespace std;

int main() {
    struct Student { //A new data type, (created by ourselves)
        string name;//Member 1, indicating name
        short age;//Member 2, indicating age
        string gender;//Member 3, indicating gender
    };

    struct Student student_01;
    student_01 = {"Nobody", 33, "Male"};
//    cout << student_01 << endl;
    cout << "student_01 name: " << student_01.name << endl;
    cout << "student_01 age: " << student_01.age << endl;
    cout << "student_01 gender: " << student_01.gender << endl;

    struct Student student_02;
    student_02 = {"VK-Nobody", 33, "Male"};
    cout << "student_02 name: " << student_02.name << endl;
    cout << "student_02 age: " << student_02.age << endl;
    cout << "student_02 gender: " << student_02.gender << endl;
    return 0;
}