//
// Created by VULCA on 11/6/2024.
//
#include "useful_header_file.h"

using namespace std;

class Phone {
public:
    Phone(string temp_phone_name) {
        phone_name = temp_phone_name;
    }

    string phone_name;

    ~Phone() {
        cout << "Phone " << phone_name << " is destroyed" << endl;
    }
};

class Person {
public:
    Person(string temp_person_name, string temp_person_phone_name) : person_name(temp_person_name),
                                                                     person_phone_name(temp_person_phone_name) {
        cout << person_name << "'s phone name is " << person_phone_name.phone_name << endl;
    }

    string person_name;
    Phone person_phone_name;

    ~Person() {
        cout << "Person " << person_name << " is destroyed" << endl;
    }
};

void test_01() {
    Person person_01("Nobody", "HUAWEI");
}

int main() {
    test_01();
    return 0;
}