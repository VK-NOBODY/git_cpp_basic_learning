//
// Created by VULCA on 13/6/2024.
//
#include "useful_header_file.h"

using namespace std;

//���B����2 �u���Ʒ
class AbstractDrink {
public:
    //��ˮ
    virtual void boil_water() = 0;

    //�_��
    virtual void brew() = 0;

    //���뱭��
    virtual void pour_in_cup() = 0;

    //�����o��
    virtual void put_something() = 0;

    void make_drink() {
        boil_water();
        brew();
        pour_in_cup();
        put_something();
    }
};

//�u������
class Coffee : public AbstractDrink {
public:
    virtual void boil_water() {
        cout << "boil_water" << endl;
    }

    virtual void brew() {
        cout << "brew coffee" << endl;
    }

    virtual void pour_in_cup() {
        cout << "pour_in_cup" << endl;
    }

    virtual void put_something() {
        cout << "add sugar and milk" << endl;
    }

};

//�u����
class Tea : public AbstractDrink {
public:
    virtual void boil_water() {
        cout << "boil_water" << endl;
    }

    virtual void brew() {
        cout << "brew tea" << endl;
    }

    virtual void pour_in_cup() {
        cout << "pour_in_cup" << endl;
    }

    virtual void put_something() {
        cout << "add wolfberry" << endl;
    }
};

void test_01() {
    //�u������
    Coffee *coffe = new Coffee();
    coffe->make_drink();
    delete coffe;
    coffe = nullptr;
    //�u����]
    cout << "------------------------------------------------------" << endl;
    Tea *tea = new Tea();
    tea->make_drink();
    delete tea;
    tea = nullptr;
}

int main() {
    test_01();
    return 0;
}
