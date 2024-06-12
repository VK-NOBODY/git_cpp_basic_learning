//
// Created by VULCA on 11/6/2024.
//
#include "useful_header_file.h"

using namespace std;

class Person {
public:
//    Person() {
//        cout << "The parameterless constructor is executed" << endl;
//    }

    Person(int temp_age, int temp_height) {
        age = temp_age;
        height = new int(temp_height);
    }

    Person(const Person &person) {
        age = person.age;
        height = new int(*person.height);
    }

    ~Person() {
        if (height != nullptr) {
            delete height;
            height = nullptr;
        }

        cout << "The destructor is executed" << endl;
    }

    int age;
    int *height;
};

void test() {
    Person person1(20, 180);
    Person person2(person1);
    cout << "person1.age = " << person1.age << endl;
    cout <<
         "person1.height = " << *person1.height << endl;
    cout << "person2.age = " << person2.age << endl;
    cout << "person2.height = " << *person2.height << endl;
}

int main() {
    test();
    return 0;
}