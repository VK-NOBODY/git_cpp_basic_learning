//
// Created by VULCA on 11/6/2024.
//
#include "/header_files/useful_header_file.h"

using namespace std;

class Person {
public:
//    Person(int a, int b, int c) {
//        a_01 = a;
//        b_01 = b;
//        c_01 = c;
//    }
    Person(int a, int b, int c) : a_01(a), b_01(b), c_01(c) {}

    int a_01;
    int b_01;
    int c_01;
};

void test_01() {
//    Person person_01(10, 20, 30);
    Person person_02(30, 20, 10);
//    cout << "a_01: " << person_01.a_01 << endl;
//    cout << "b_01: " << person_01.b_01 << endl;
//    cout << "c_01: " << person_01.c_01 << endl;
    cout << "a_01: " << person_02.a_01 << endl;
    cout << "b_01: " << person_02.b_01 << endl;
    cout << "c_01: " << person_02.c_01 << endl;
}

int main() {
    test_01();
    return 0;
}