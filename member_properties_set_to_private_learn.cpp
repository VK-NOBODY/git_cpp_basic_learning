//
// Created by VULCA on 10/6/2024.
//
#include "header_files/useful_header_file.h"

using namespace std;

class Person {
public:
    void set_name(string name) {
        m_name = name;
    }

    string get_name() {
        return m_name;
    }

    int get_age() {
        return m_age;
    }

    void set_idol(string idol) {
        m_idol = idol;
    }

    void set_age(int age) {
        if (age >= 0 && age <= 150) {
            m_age = age;
        } else {
            cout << "Age is out of range" << endl;
        }
    }

private:
    string m_name;
    int m_age = 130;
    string m_idol;
};

int main() {
    Person person;
//    person.m_name = "Nobody";
    person.set_name("Nobody");
    cout << person.get_name() << endl;
    cout << person.get_age() << endl;
    person.set_idol("Nobody");
    person.set_age(160);
    cout << person.get_age() << endl;
    person.set_age(150);
    cout << person.get_age() << endl;
    return 0;
}