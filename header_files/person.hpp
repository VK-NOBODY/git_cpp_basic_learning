//
// Created by VULCA on 18/6/2024.
//
#pragma once
#include "iostream"
using namespace std;
//類模板分文件編寫問題以及解決
template<class T_01, class T_02>
class Person {
public:
    Person(T_01 name, T_02 age);

    void show_person();

    T_01 my_name;
    T_02 my_age;
};
template<class T_01, class T_02>
Person<T_01, T_02>::Person(T_01 name, T_02 age) {
    this->my_name = name;
    this->my_age = age;
}

template<class T_01, class T_02>
void Person<T_01, T_02>::show_person() {
    cout << "姓名:" << this->my_name << " 年齡:" << this->my_age << endl;
}
