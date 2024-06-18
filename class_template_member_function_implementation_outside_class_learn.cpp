//
// Created by VULCA on 18/6/2024.
//
#include "iostream"

using namespace std;

//類模板成員函數類外實現
template<class T_01, class T_02>
class Person {
public:
    Person(T_01 name, T_02 age);
//    {
//        this->my_name = name;
//        this->my_age = age;
//    }

    void showPerson();
//    {
//        cout << "姓名：" << this->my_name << " 年齡：" << this->my_age << endl;
//    }

    T_01 my_name;
    T_02 my_age;
};

//類模板中構造函數類外實現
template<class T_01, class T_02>
Person<T_01, T_02>::Person(T_01 name, T_02 age) {
    this->my_name = name;
    this->my_age = age;
}

//類模板中成員函數類外實現
template<class T_01, class T_02>
void Person<T_01, T_02>::showPerson() {
    cout << "姓名：" << this->my_name << " 年齡：" << this->my_age << endl;
}

void test_01() {
    Person<string, int> person_01("Nobody", 18);
    person_01.showPerson();
}

int main() {
    test_01();
    return 0;
}