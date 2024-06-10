//
// Created by VULCA on 9/6/2024.
//
#include "header_files/useful_header_file.h"

using namespace std;

class Test_01 {
public:
    int a = 10;
};

struct Test_02 {
    int b = 10;
};

int main() {
    Test_01 test_01;
    cout << test_01.a << endl;
    Test_02 test_02;
    cout << test_02.b << endl;
    return 0;
}