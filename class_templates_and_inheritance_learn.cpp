//
// Created by VULCA on 18/6/2024.
//
#include "iostream"

using namespace std;

//類模板與繼承
template<class T>
class Base {
public:
    T my;
};

//class Son : public Base 錯誤,必須要知道父類中的T類型,才能繼承給子類
class Son : public Base<int> {
public:
    void show() {
        cout << sizeof(this->my) << endl;
    }
};

void test_01() {
    Son son_01;
    son_01.show();
}

//如果想靈活指定父類中T類型,子類也需要變類模板
template<class T_01, class T_02>
class Son_01 : public Base<T_02> {
public:
    Son_01() {
        cout << "T_01的類型為:" << typeid(T_01).name() << endl;
        cout << "T_02的類型為:" << typeid(T_02).name() << endl;
    }

    T_01 my_01;
};

void test_02() {
    Son_01<int, char> son_01;
}

int main() {
//    test_01();
    test_02();
    return 0;
}