//
// Created by VULCA on 5/6/2024.
//
#include "useful_header_file.h"

using namespace std;

int main() {

    struct Student {
        string name;
        short age;
        string gender;
    };
    struct Student student[3];
    student[0] = {"Nobody", 20, "Male"};
    student[1] = {"VK-Nobody", 21, "Female"};
    student[2] = {"Anybody", 22, "Other"};

    for (int i = 0; i < 3; i++) {
        cout << "Name: " << student[i].name << "\t";
        cout << "Age: " << student[i].age << "\t";
        cout << "Gender: " << student[i].gender << "\t" << endl;
    }
    cout << endl;
    struct Student student_02[2] = {{"Nobody",    20, "Male"},
                                    {"VK-Nobody", 21, "Female"}};
    for (int i = 0; i < 2; i++) {
        cout << "Name: " << student_02[i].name << "\t";
        cout << "Age: " << student_02[i].age << "\t";
        cout << "Gender: " << student_02[i].gender << "\t" << endl;
    }
    return 0;
}