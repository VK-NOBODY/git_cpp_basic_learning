//
// Created by VULCA on 16/6/2024.
//
#include "iostream"

using namespace std;

//類模板中成員函數創建時機
//類模板中成員函數在調用時才去創建
class Person_01 {
public:
    void show_person_01() {
        cout << "Person_01 show" << endl;
    }
};

class Person_02 {
public:
    void show_person_02() {
        cout << "Person_02 show" << endl;
    }
};

template<class T>
class MyClass {
public:
    T obj;

    //類模板中的成員函數
    void function_01() {
        obj.show_person_01();
    }

    void function_02() {
        obj.show_person_02();
    }
};

void test_01() {
    MyClass<Person_02> my_class_01;
//    my_class_01.function_01();
    my_class_01.function_02();
}

int main() {
    test_01();
    return 0;
}