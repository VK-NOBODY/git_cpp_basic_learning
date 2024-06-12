//
// Created by VULCA on 12/6/2024.
//
#include "useful_header_file.h"

using namespace std;

class Person {
public:
    Person(string temp_name, int temp_age) {
        name = temp_name;
        age = temp_age;
    }

    bool operator==(const Person &person) {
        if (name == person.name && age == person.age) {
            return true;
        } else {
            return false;
        }
    }


    bool operator!=(const Person &person) {
        if (name == person.name && age == person.age) {
            return false;
        } else {
            return true;
        }
    }

    string name;
    int age;
};

void test_01() {
    Person person_01("Nobody", 18);
    Person person_02("Nobody", 18);
    Person person_03("Nobody", 18);
    if (person_01 == person_02) {
        cout << "person_01 == person_02" << endl;
    } else {
        cout << "person_01 != person_02" << endl;
    }
    if (person_01 != person_02) {
        cout << "person_01 != person_02" << endl;
    } else {
        cout << "person_01 == person_02" << endl;
    }
}

int main() {
//    test_01();
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    cout << bool((a == b) == c) << endl;
    return 0;
}