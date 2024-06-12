//
// Created by VULCA on 12/6/2024.
//
#include "useful_header_file.h"

using namespace std;

class Bass_01 {
//    friend class Son_03;
public:
    int a_01;
protected:
    int b_01;
private:
    int c_01;
};

class Son_01 : public Bass_01 {
public:
    void function_01() {
        a_01 = 1;
        b_01 = 2;
//        c_01=3;
    }
};

class Son_02 : protected Bass_01 {
    void function_02() {
        a_01 = 1;
        b_01 = 2;
//        c_01=3;
    }
};

class Son_03 : private Bass_01 {
    void function_03() {
        a_01 = 1;
        b_01 = 2;
//        c_01=3;
    }
};
class GrandSon_01:public Son_03{
public:
    void function_04(){
//        a_01=1;
//        b_01=2;
//        c_01=3;
    }
};

void test_01() {
    Son_01 son_01;
    son_01.a_01 = 1;
//     son_01.b_01=2;
//     son_01.c_01=3;
}

void test_02() {
    Son_02 son_02;
//    son_02.a_01=1;
//    son_02.b_01=2;
//    son_02.c_01=3;
}

void test_03() {
    Son_03 son_03;
//    son_03.a_01=1;
//    son_03.b_01=2;
//    son_03.c_01=3;
}

int main() {
    return 0;
}