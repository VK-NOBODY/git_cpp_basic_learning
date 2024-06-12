//
// Created by VULCA on 12/6/2024.
//
#include "useful_header_file.h"

using namespace std;

class Base {
public:
    int x = 100;

    void function_01() {
        cout << "Base::function_01()" << endl;
    }

    void function_01(int temp_a) {
        cout << "Base::function_01(int temp_a)" << endl;
    }
};

class Son : public Base {
public:
    int x = 200;

    void function_01() {
        cout << "Son::function_01()" << endl;
    }
};

//class GrandSon : public Son {
//public:
//    int x = 300;
//};

void test_01() {
    Son s;
    cout << s.x << endl;
    cout << s.Base::x << endl;
}

void test_02() {
    Son s;
    s.function_01();
    s.Base::function_01();
//    s.function_01(100);
    s.Base::function_01(100);
}

int main() {
//    test_01();
    test_02();
    return 0;
}