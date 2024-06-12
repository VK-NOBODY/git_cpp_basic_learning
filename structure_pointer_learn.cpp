//
// Created by VULCA on 5/6/2024.
//
#include "useful_header_file.h"

using namespace std;

int main() {

    struct Student {
        string name;
        int age{};
        string gender;
    };
    Student student_01 = {"Nobody", 11, "Male"};
//    struct Student *p =&student_01;
    Student *p;
    p = &student_01;
    cout << "Name of struct: " << p->name << endl;
    cout << "Age of struct: " << p->age << endl;
    cout << "Gender of struct: " << p->gender << endl;
    p = nullptr;
    return 0;
}