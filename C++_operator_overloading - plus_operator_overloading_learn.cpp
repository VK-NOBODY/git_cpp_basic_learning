//
// Created by VULCA on 12/6/2024.
//
#include "useful_header_file.h"

using namespace std;

class Person {
public:
    int a_01;
    int b_01;

//1.成員函數重載+號
//    Person operator+(Person &temp_p) {
//        Person temp;
//        temp.a_01 = this->a_01 + temp_p.a_01;
//        temp.b_01 = this->b_01 + temp_p.b_01;
//        return temp;
//    }
};

//2.全局函數重載+號
Person operator+(Person &temp_p1, Person &temp_p2) {
    Person temp;
    temp.a_01 = temp_p1.a_01 + temp_p2.a_01;
    temp.b_01 = temp_p1.b_01 + temp_p2.b_01;
    return temp;
}

//3.全局函數重載+號
Person operator+(Person &temp_p1, int temp_int) {
    Person temp;
    temp.a_01 = temp_p1.a_01 + temp_int;
    temp.b_01 = temp_p1.b_01 + temp_int;
    return temp;
}

void test_01() {
    Person p1;
    p1.a_01 = 10;
    p1.b_01 = 20;
    Person p2;
    p2.a_01 = 30;
    p2.b_01 = 40;
    Person p3;
//    p3 = p1.operator+(p2);
    p3 = operator+(p1, p2);
//    p3 = p1 + p2;
    cout << "p3.a_01 = " << p3.a_01 << endl;
    cout << "p3.b_01 = " << p3.b_01 << endl;
    p3 = p1 + 10;
    cout << "p3.a_01 = " << p3.a_01 << endl;
    cout << "p3.b_01 = " << p3.b_01 << endl;
}

int main() {
    test_01();
    return 0;
}