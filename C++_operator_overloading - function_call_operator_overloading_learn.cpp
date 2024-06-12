//
// Created by VULCA on 12/6/2024.
//
#include "useful_header_file.h"

using namespace std;

class MyPrint {
public:
    void operator()(string temp_test) {
        cout << temp_test << endl;

    }
};

class MyAdd {
public:
    int operator()(int temp_a, int temp_b) {
        return temp_a + temp_b;
    }
};

void MyPrint_02(string temp_test) {
    cout << temp_test << endl;
}

void test_01() {
    MyPrint my_print;
    my_print("hello world");
    MyPrint_02("hello world");
}

void test_02() {
    MyAdd my_add;
    cout << my_add(1, 2) << endl;
    cout << MyAdd()(1, 2) << endl;
}


int main() {
//    test_01();
    test_02();
    return 0;
}