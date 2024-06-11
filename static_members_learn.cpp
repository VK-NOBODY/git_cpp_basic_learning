//
// Created by VULCA on 11/6/2024.
//
#include "/header_files/useful_header_file.h"

using namespace std;

class Person {
public:
    static int a_01;
private:
    static int a_02;
};

int Person::a_01 = 0;
int Person::a_02 = 0;

void test_01() {
    Person person_01;
    cout << "person_01.a_01=" << person_01.a_01 << endl;
    Person person_02;
    person_02.a_01 = 1;
    cout << "person_01.a_01=" << person_01.a_01 << endl;
}

void test_02() {
    cout << "Person::a_01=" << Person::a_01 << endl;
//    cout << "Person::a_02=" << Person::a_02 << endl;
}

int main() {
//    test_01();
    test_02();
    return 0;
}