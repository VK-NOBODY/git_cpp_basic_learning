//
// Created by VULCA on 11/6/2024.
//
#include "/header_files/useful_header_file.h"

using namespace std;

class Person {

    int a_01;//Non-static member variables belong to the class object
    static int b_01; //Static member variables do not belong to class objects

    void function_01() {//Non-static member function does not belong to the class object
    }

    static void function_02() {//Static member function does not belong to the class object
    }
};

//void test_01() {
//    Person person;
//    //The C++ compiler will also allocate a byte of space for each empty object in order to distinguish the location of the empty object in the memory.
//    cout << "sizeof(Person) = " << sizeof(Person) << endl;
//}

void test_02() {
    Person person;
    cout << "sizeof(Person) = " << sizeof(Person) << endl;
}

int main() {
//    test_01();
    test_02();
    return 0;
}