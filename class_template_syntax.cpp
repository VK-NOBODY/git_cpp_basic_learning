//
// Created by VULCA on 16/6/2024.
//
#include "iostream"
using namespace std;

template<class NameType, class AgeType>
class Person {
public:
    Person(NameType name, AgeType age) {
        this->my_name = name;
        this->my_age = age;
    }

    void show_person() {
        cout << "Name: " << this->my_name << endl;
        cout << "Age: " << this->my_age << endl;
    }

    NameType my_name;
    AgeType my_age;
};

void test_01() {
    Person<string, int> person_01("Nobody", 18);
    person_01.show_person();
}

int main() {
    test_01();
    return 0;
}