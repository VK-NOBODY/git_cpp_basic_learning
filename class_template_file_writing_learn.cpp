//
// Created by VULCA on 18/6/2024.
//
#include "iostream"
#include "/header_files/person.hpp"
//類模板分文件編寫問題以及解決
//第一種解決方式 直接包含源文件
//#include "/source_files/person.cpp"
//第二種解決方式,將.h和.cpp中的內容寫到一起,將後綴名改為.hpp文件
#include "/header_files/person.hpp"

using namespace std;


//template<class T_01, class T_02>
//class Person {
//public:
//    Person(T_01 name, T_02 age);
//
//    void show_person();
//
//    T_01 my_name;
//    T_02 my_age;
//};
//
//template<class T_01, class T_02>
//Person<T_01, T_02>::Person(T_01 name, T_02 age) {
//    this->my_name = name;
//    this->my_age = age;
//}
//
//template<class T_01, class T_02>
//void Person<T_01, T_02>::show_person() {
//    cout << "姓名:" << this->my_name << " 年齡:" << this->my_age << endl;
//}

void test_01() {
    Person<string, int> person_01("Nobody", 18);
    person_01.show_person();
}

int main() {
    test_01();
    return 0;
}