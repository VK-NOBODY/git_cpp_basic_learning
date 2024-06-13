//
// Created by VULCA on 13/6/2024.
//
#include "useful_header_file.h"

using namespace std;

//動物類
class Animal {
public:
    virtual void speak() {
        cout << "Animal Speak" << endl;
    }
};

//貓類
class Cat : public Animal {
public:
    void speak() {
        cout << "Cat Speak" << endl;
    }
};

//狗類
class Dog : public Animal {
public:
    void speak() {
        cout << "Dog Speak" << endl;
    }
};

//執行說話的函數
//地址早綁定 在編譯階段就確定函數地址
//如果想執行讓貓在說話,那麽這個函數地址就不能提前綁定,得在運行階段確定

//動態多態滿足條件:1.基類有虚函數 2.基類有子類3.子類重寫父類的虛函數
//重寫:函數名稱相同,參數列表相同,返回值類型相同
//動態多態使用:父類的指針或者引用,執行子類對象
void do_speak(Animal &temp_animal) {
    temp_animal.speak();
}

void test_01() {
    Cat cat;
    do_speak(cat);
    Dog dog;
    do_speak(dog);
}

int main() {
    test_01();
    return 0;
}