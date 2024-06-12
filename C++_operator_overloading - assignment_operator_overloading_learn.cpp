//
// Created by VULCA on 12/6/2024.
//
#include "useful_header_file.h"

using namespace std;

class Person {
public:
    Person(int temp_age) {
        age = new int(temp_age);
    }

    Person &operator=(const Person &person) {
        if (age != nullptr) {
            delete age;
            age = nullptr;
        }
        age = new int(*person.age);
        return *this;
    }

    ~Person() {
        if (age != nullptr) {
            delete age;
            age = nullptr;
        }
    }

    int *age;
};

void test_01() {
    Person person_01(18);
    Person person_02(20);
    Person person_03(22);
    person_02 = person_01;
    cout << "person_01 age = " << *person_01.age << endl;
    cout << "person_02 age = " << *person_02.age << endl;
    person_03 = person_02 = person_01;
    cout << "person_01 age = " << *person_01.age << endl;
    cout << "person_02 age = " << *person_02.age << endl;
    cout << "person_03 age = " << *person_03.age << endl;
}

int main() {
    test_01();
//    int a = 10;
//    int b = 20;
//    int c = 30;
//    c = b = a;
//    cout << "a = " << a << endl;
//    cout << "b = " << b << endl;
//    cout << "c = " << c << endl;
    return 0;
}