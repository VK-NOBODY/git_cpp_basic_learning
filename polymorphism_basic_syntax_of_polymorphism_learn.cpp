//
// Created by VULCA on 13/6/2024.
//
#include "useful_header_file.h"

using namespace std;

//�����
class Animal {
public:
    virtual void speak() {
        cout << "Animal Speak" << endl;
    }
};

//؈�
class Cat : public Animal {
public:
    void speak() {
        cout << "Cat Speak" << endl;
    }
};

//���
class Dog : public Animal {
public:
    void speak() {
        cout << "Dog Speak" << endl;
    }
};

//�����fԒ�ĺ���
//��ַ�罉�� �ھ��g�A�ξʹ_��������ַ
//��������׌؈���fԒ,�����@��������ַ�Ͳ�����ǰ����,�����\���A�δ_��

//�ӑB���B�M��l��:1.������麯�� 2.��������3.����،����̓����
//�،�:�������Q��ͬ,�����б���ͬ,����ֵ�����ͬ
//�ӑB���Bʹ��:���ָᘻ�������,���������
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