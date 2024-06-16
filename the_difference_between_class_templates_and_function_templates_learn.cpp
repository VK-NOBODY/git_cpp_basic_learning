//
// Created by VULCA on 16/6/2024.
//
#include "iostream"

using namespace std;

//函數模板和類模板的差異
template<class NameType, class AgeType=int>
class Person {
public:
    Person(NameType name, AgeType age) {
        this->my_name = name;
        this->my_age = age;
    }

    void show_person() {
        cout << "name: " << this->my_name << endl;
        cout << "age: " << this->my_age << endl;
    }

    NameType my_name;
    AgeType my_age;
};

void test_01() {
    Person person_01("孫悟空", 1000);//C++ 17開始支持類模板自動類型推導
    Person<string, int> person_02("唐僧", 1000);//類模板顯示指定類型
    person_01.show_person();
    person_02.show_person();
}

void test_02() {
    Person<string> person_03("豬八戒", 1000);//類模板在模板參數列表中可以有默認參數,函數模板不可以有默認參數
    person_03.show_person();
}

int main() {
    test_01();
    return 0;
}