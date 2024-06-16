//
// Created by VULCA on 16/6/2024.
//
#include "iostream"

using namespace std;

//模板函數注意事項
template<typename T>
//typename可以替換成class
//1.自動類型推導
void swap_number(T &temp_number_01, T &temp_number_02) {
    T temp_number_03;
    temp_number_03 = temp_number_01;
    temp_number_01 = temp_number_02;
    temp_number_02 = temp_number_03;
}

//2.模板必須要確定T的數據類型,才可以使用
template<class T>
void swap_01() {
    cout << "swap_01" << endl;
}

void test_01() {
    int a = 10;
    int b = 20;
    char c = 'c';
    swap_number(a, b);
    //    swap_number(a, c);//推導不出一致的T類型
    cout << "a=" << a << " b=" << b << endl;
}

void test_02() {
    swap_01<int>();
}

int main() {

//    test_01();
    test_02();

    return 0;
}