//
// Created by VULCA on 13/6/2024.
//
#include "useful_header_file.h"

using namespace std;

class Animal {
public:
    virtual void speak() const {
        cout << "Animal Speak" << endl;
    }
};

class Cat : public Animal {
    virtual void speak() const {
        cout << "Cat Speak" << endl;
    }
};

void do_speak(Animal &temp_animal) {
    temp_animal.speak();
}

void test_01() {
//    cout << "size of Animal = " << sizeof(Animal) << endl;
//    cout << "size of Cat = " << sizeof(Cat) << endl;
    Cat cat;
    do_speak(cat);
    cout << endl;
    Animal animal;
    do_speak(animal);
    cout << endl;
}

int main() {
    test_01();
    return 0;
}