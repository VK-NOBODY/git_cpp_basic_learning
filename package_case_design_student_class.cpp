//
// Created by VULCA on 9/6/2024.
//
#include "header_files/useful_header_file.h"

using namespace std;

class Student {
public:
    string student_name;
    int student_id;

    //The attributes and behaviors in the class are collectively called members
    //Properties member properties member variables
    //Behavior member function member method```
    void show_student_info() {
        cout << "Student Name: " << student_name << endl;
        cout << "Student ID: " << student_id << endl;
    }

    void set_student_info(string set_student_name, int set_student_id) {
        student_name = set_student_name;
        student_id = set_student_id;
    }

};

int main() {
    Student student_01;
    student_01.student_name = "Nobody";
    student_01.student_id = 10010;
    student_01.show_student_info();
    Student student_02;
    student_02.student_name = "Somebody";
    student_02.student_id = 10016;
    student_02.show_student_info();
    Student student_03;
    student_03.set_student_info("Anybody", 10086);
    student_03.show_student_info();
    return 0;
}