//
// Created by VULCA on 13/6/2024.
//
#include "useful_header_file.h"

using namespace std;

class Animal {
public:
    Animal() {
        cout << "animal constructor" << endl;
    }

    //���̓����ֻ��Ҫ��,����Ҫ���F
    virtual void speak() = 0;

//    virtual ~Animal() {
//        cout << "animal destructor" << endl;
//    }
    //���̓������Ҫ��,Ҳ��Ҫ���F
    virtual ~Animal() {
        cout << "animal destructor" << endl;
    }
};

//Animal::~Animal() {
//    cout << "animal destructor" << endl;
//}

class Cat : public Animal {
public:
    Cat(string &temp_cat_name) {
        this->temp_cat_name = temp_cat_name;
        cat_name = new string(temp_cat_name);
        cout << "cat constructor" << endl;
    }

    virtual void speak() {
        cout << "cat speak" << endl;
    }

    ~Cat() {
        if (cat_name != nullptr) {
            delete cat_name;
            cat_name = nullptr;
            cout << "cat destructor" << endl;
        }
    }

    string *cat_name;
    string temp_cat_name;
};

void test_01() {
    string cat_name = "animal";
    Animal *animal = new Cat(cat_name);
    animal->speak();
    //���ָ��������r��,�����{������е���������,��Ҫ̓�����������
    delete animal;
    animal = nullptr;
//    Animal animal_01;
}

int main() {
    test_01();
    return 0;
}