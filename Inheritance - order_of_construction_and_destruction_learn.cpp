//
// Created by VULCA on 12/6/2024.
//
#include "useful_header_file.h"

using namespace std;

class Base {
public:
    Base() {
        cout << "Base constructor" << endl;
    }

    ~Base() {
        cout << "Base destructor" << endl;
    }
};

class Son : public Base {
public:
    Son() {
        cout << "Son constructor" << endl;
    }

    ~Son() {
        cout << "Son destructor" << endl;
    }

};

void test_01() {
    Son son;
}

int main() {
    test_01();
    return 0;
}