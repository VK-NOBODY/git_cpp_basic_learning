//
// Created by VULCA on 13/6/2024.
//
#include "useful_header_file.h"

using namespace std;

class Base {
public:
    //純虛函數
    //只要有一個純虛函數,這個類稱為抽象類
    //抽象類特點
    //1.無法實例化對象
    //2.抽象類的子類 必須要重寫父類中的純虛函數 否則也屬於抽象類
    virtual void function() = 0;

public:
};

class Son : public Base {
public:
    virtual void function() {
        cout << "son" << endl;
    }
};

int main() {
//    Base base;
//    new Base();
    Son *son = new Son();
    Base *base = new Son();
    base->function();
    delete base;
    base = nullptr;
    delete son;
    son = nullptr;
    return 0;
}