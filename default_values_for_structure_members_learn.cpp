//
// Created by VULCA on 5/6/2024.
//
#include "useful_header_file.h"

using namespace std;

int main() {

    struct Student {
        string name;
        string major_code = "003032";
        int dormitory_number = 1;
    };
    struct Student student_01 = {"Nobody"};
    struct Student student_02 = {"VK-Nobody"};
    cout << "student_01.name = " << student_01.name << endl;
    cout << "student_01.major_code = " << student_01.major_code << endl;
    cout << "student_01.dormitory_number = " << student_01.dormitory_number << endl;
    cout << endl;
    cout << "student_02.name = " << student_02.name << endl;
    cout << "student_02.major_code = " << student_02.major_code << endl;
    cout << "student_02.dormitory_number = " << student_02.dormitory_number << endl;
    return 0;
}