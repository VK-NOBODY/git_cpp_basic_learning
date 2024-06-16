//
// Created by VULCA on 16/6/2024.
//
#include "iostream"

using namespace std;

template<class NameType, class AgeType>
class Person {
public:
    Person(NameType name, AgeType age) {
        this->my_name = name;
        this->my_age = age;
    }

    NameType my_name;
    AgeType my_age;
};

int main() {
    return 0;
}