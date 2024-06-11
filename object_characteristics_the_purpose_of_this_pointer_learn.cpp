//
// Created by VULCA on 11/6/2024.
//
#include "/header_files/useful_header_file.h"

using namespace std;

class Person {
public:
    Person(int temp_age) {
        this->age = temp_age;
    }

    Person &person_add_age(Person &temp_person) {
        this->age += age;
        return *this;
    }

    int age;
};

void test_01() {
    Person person_01(10);
    cout << "person_01.age= " << person_01.age << endl;
}

void test_02() {
    Person person_02(20);
    Person person_03(20);
    //Chain programming idea
    person_02.person_add_age(person_03).person_add_age(person_03).person_add_age(person_03);
    cout << "person_02.age= " << person_02.age << endl;
}

int main() {
//    test_01();
    test_02();
    return 0;
}