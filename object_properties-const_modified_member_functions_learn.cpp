//
// Created by VULCA on 12/6/2024.
//
#include "useful_header_file.h"

using namespace std;

class Person {
public:
    //在成員函數後面加const,修飾的是this指向,讓指針指向的值也不可以修改
    // Add const after the member function to modify the point pointed to by this so that the value pointed to by the pointer cannot be modified.
    Person() {

    }

    void show_person() const {
//        this->a_01 = 100;
//        this = nullptr;
        this->b_01 = 100;

    }

    void function_01() {

    }

    int a_01;
    mutable int b_01;//Special variables can be modified even in constant functions and constant objects
};

void test_01() {
    Person person_01;
    person_01.show_person();
    cout << "person_01.b_01 = " << person_01.b_01 << endl;
}

void test_02() {
    const Person person_02;
    person_02.show_person();
//    person_02.a_01=100;
    person_02.b_01 = 100;
    person_02.show_person();
//    person_02.function_01();
}

int main() {
    test_01();
    test_02();
    return 0;
}