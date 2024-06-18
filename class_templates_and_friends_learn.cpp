//
// Created by VULCA on 18/6/2024.
//
#include "iostream"

using namespace std;

//提前讓編譯器提前知道這個模板類Person的存在
template<class T_01, class T_02>
class Person;

//類外實現
template<class T_01, class T_02>
void cout_person_01(Person<T_01, T_02> temp_person) {
    cout << temp_person.my_name << " " << temp_person.my_age << endl;
}

//通過全局函數 輸出Person的信息
template<class T_01, class T_02>
class Person {
    //全局函數類內實現
    friend void cout_person(Person<T_01, T_02> temp_person) {
        cout << temp_person.my_name << " " << temp_person.my_age << endl;
    }

    //全局函數類外實現
    //加空模板參數列表
    //如果全局函數 是類外實現 需要讓編譯器提前知道這個函數的存在
    friend void cout_person_01<>(Person<T_01, T_02> temp_person);

public:
    Person(T_01 name, T_02 age) {
        this->my_name = name;
        this->my_age = age;
    }

    T_01 my_name;
    T_02 my_age;
};


void test_01() {
    Person<string, int> person_01("Nobody", 18);
    cout_person(person_01);
}

void test_02() {
    Person<string, int> person_01("Somebody", 18);
    cout_person_01(person_01);
}

int main() {
    test_01();
    test_02();
    return 0;
}