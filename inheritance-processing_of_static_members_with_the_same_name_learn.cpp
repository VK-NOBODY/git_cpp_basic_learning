//
// Created by VULCA on 12/6/2024.
//
#include "useful_header_file.h"

using namespace std;

class Base {
public:
    static int a_01;

    static int function_01();

    static int function_01(int temp_a);
};

int Base::a_01 = 0;

int Base::function_01() {
    return 1;
}

int Base::function_01(int temp_a) {
    return 3;
}

class Son : public Base {
public:
    static int a_01;

    static int function_01();
};

int Son::a_01 = 1;

int Son::function_01() {
    return 2;
}

void test_01() {
    Son son;
    cout << son.a_01 << endl;
    cout << son.Base::a_01 << endl;
    cout << endl;
    cout << Son::a_01 << endl;
    cout << Son::Base::a_01 << endl;
    cout << endl;
    cout << son.function_01() << endl;
    cout << son.Base::function_01() << endl;
    cout << endl;
    cout << Son::function_01() << endl;
    cout << Son::Base::function_01() << endl;
    cout << endl;
//    cout << son.function_01(1) << endl;
    cout << son.Base::function_01(1) << endl;
}

int main() {
    test_01();
    return 0;
}