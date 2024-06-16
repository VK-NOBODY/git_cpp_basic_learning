//
// Created by VULCA on 16/6/2024.
//
#include "iostream"

using namespace std;


//兩個整形交換函數
void swap_int(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

//兩個浮點數交換函數
void swap_double(double a, double b) {
    double temp = a;
    a = b;
    b = temp;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

//函數模板
template<typename T>
void swap_number(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

void test_01() {
    int a = 10;
    int b = 20;
    swap_number(a, b);
}

int main() {
//    swap_int(10, 20);
//    swap_double(10.5, 20.5);
    test_01();
    return 0;
}