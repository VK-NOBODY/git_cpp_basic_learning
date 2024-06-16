//
// Created by VULCA on 16/6/2024.
//
#include "iostream"

using namespace std;
//模板的侷限性
//模板不是萬能的,有些特定數據類型,需要用具體化方式做特殊實現

class Person {
public:
    Person(string name, int age) {
        my_name = name;
        my_age = age;
    }

    string my_name;
    int my_age;
};

//對比兩個數據是否相等函數
template<class T>
bool my_compare(T a, T b) {
    if (a == b) {
        return true;
    } else {
        return false;
    }
}

//利用具體化Person的版本實現代碼 具體化優先調用
template<>
bool my_compare<Person>(Person a, Person b) {
    if (a.my_name == b.my_name && a.my_age == b.my_age) {
        return true;
    } else {
        return false;
    }
}

void test_01() {
    int a = 10;
    int b = 20;
    bool result = my_compare(a, b);
    if (result) {
        cout << "a==b" << endl;
    } else {
        cout << "a!=b" << endl;
    }
}

void test_02() {
    Person person_01("Nobody", 18);
    Person person_02("Somebody", 18);
    if (my_compare(person_01, person_02)) {
        cout << "person_01==person_02" << endl;
    } else {
        cout << "person_01!=person_02" << endl;
    }
}

int main() {
    test_01();
    test_02();
    return 0;
}