//
// Created by VULCA on 13/6/2024.
//
#include "useful_header_file.h"

using namespace std;

class Base {
public:
    //��̓����
    //ֻҪ��һ����̓����,�@��Q������
    //��������c
    //1.�o������������
    //2.�������� ���Ҫ�،�����еļ�̓���� ��tҲ��춳����
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