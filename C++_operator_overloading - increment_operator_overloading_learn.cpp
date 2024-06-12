//
// Created by VULCA on 12/6/2024.
//
#include "useful_header_file.h"

using namespace std;

class MyInteger {
public:
    friend ostream &operator<<(ostream &temp_cout, const MyInteger &myInt);

    MyInteger() {
        this->value = 0;
    }

    MyInteger(int temp_value) {
        this->value = temp_value;
    }

    MyInteger &operator++() {
        this->value++;
        return *this;
    }

    MyInteger &operator--() {
        this->value--;
        return *this;
    }

//    MyInteger operator++(int) int 代表占位參數,可以用於區分前置和後置遞增
    MyInteger operator++(int) {
        MyInteger temp = *this;
        this->value++;
        return temp;
    }

    MyInteger operator--(int) {
        MyInteger temp = *this;
        this->value--;
        return temp;
    }

private:
    int value;
};

ostream &operator<<(ostream &temp_cout, const MyInteger &myInt) {
    temp_cout << myInt.value;
    return temp_cout;
}

void test_01() {
    MyInteger myInteger;
    cout << myInteger << endl;
    myInteger = 10;
    cout << ++(++myInteger) << endl;
    cout << myInteger << endl;
    cout << myInteger++ << endl;
    cout << myInteger << endl;
    cout << endl;
    cout << --myInteger << endl;
    cout << myInteger << endl;
    cout << myInteger-- << endl;
    cout << myInteger << endl;
}

int main() {
//    int a = 10;
//    cout << ++a << endl;
//    cout << a << endl;
//    int b = 10;
//    cout << b++ << endl;
//    cout << b << endl;
    test_01();
    return 0;
}