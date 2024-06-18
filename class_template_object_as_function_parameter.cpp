//
// Created by VULCA on 18/6/2024.
//
#include "iostream"

using namespace std;

//類模板對象做函數參數
template<class T_01, class T_02>
class Person {
public:
    Person(T_01 name, T_02 age) {
        this->my_Name = name;
        this->my_Age = age;
    }

    void show_person() {
        cout << "姓名：" << this->my_Name << " 年齡：" << this->my_Age << endl;
    }

    T_01 my_Name;
    T_02 my_Age;
};


//1.指定傳入類型
void cout_person_01(Person<string, int> &person) {
    person.show_person();
}

void test_01() {
    Person<string, int> person_01("Nobody", 18);
    cout_person_01(person_01);
}

//2.參數模板化
template<class T_01, class T_02>
void cout_person_02(Person<T_01, T_02> &person) {
    person.show_person();
    cout << "類型：" << typeid(T_01).name() << endl;
    cout << "類型：" << typeid(T_02).name() << endl;
}

void test_02() {
    Person<string, int> person_02("Somebody", 18);
    cout_person_02(person_02);
}

//3.整個類模板化
template<class T>
void cout_person_03(T &person) {
    person.show_person();
    cout << "類型：" << typeid(T).name() << endl;
}

void test_03() {
    Person<string, int> person_03("Anybody", 18);
    cout_person_03(person_03);
}

int main() {
//    test_01();
//    test_02();
    test_03();
    system("pause");
    return 0;
}