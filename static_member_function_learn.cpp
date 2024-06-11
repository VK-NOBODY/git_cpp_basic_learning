//
// Created by VULCA on 11/6/2024.
//
#include "/header_files/useful_header_file.h"

using namespace std;

class Person {
public:
    static void function_01() {
//        a_01 = 10;
//        b_01 = 20;
        cout << "static function_01" << endl;
    }

    static int a_01;
    int b_01;
private:
    static void function_02() {
        cout << "static function_02" << endl;
    }
};

void test_01() {
    Person person_01;
    person_01.function_01();
}

//void test_02() {
//    Person::function_01();
//}
void test_03() {
//    Person::function_02();
}

int main() {
    test_01();
//    test_02();
    test_03();
    return 0;
}