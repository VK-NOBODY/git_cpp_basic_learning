//
// Created by VULCA on 12/6/2024.
//
#include"useful_header_file.h"

using namespace std;

class Base {
public:
    int a_01;
protected:
    int b_01;
private:
    int c_01;
};

class Son : public Base {
public:
    int d_01;
};

void test_01() {
    cout << "size of Son= " << sizeof(Son) << endl;
}

int main() {
    test_01();
    return 0;
}