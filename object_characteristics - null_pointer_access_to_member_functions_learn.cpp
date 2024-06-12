//
// Created by VULCA on 12/6/2024.
//
#include "useful_header_file.h"

using namespace std;

class Person {
public:
    static void show_class_name() {
        cout << "this is Person class" << endl;
    }

    void show_person_age() {
        if (this == nullptr) {
            cout << "this is a null pointer" << endl;
            return;
        }
        //Because the incoming pointer is empty, an error will be reported.
        cout << "age= " << this->age << endl;
    }

    int age;
};

void test_01() {
    Person *person = nullptr;
    person->show_class_name();
    person->show_person_age();
}

int main() {
    test_01();
    return 0;
}