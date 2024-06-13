//
// Created by VULCA on 13/6/2024.
//
#include "useful_header_file.h"

using namespace std;

//多態案例2 製作飲品
class AbstractDrink {
public:
    //煮水
    virtual void boil_water() = 0;

    //沖泡
    virtual void brew() = 0;

    //倒入杯中
    virtual void pour_in_cup() = 0;

    //加入輔料
    virtual void put_something() = 0;

    void make_drink() {
        boil_water();
        brew();
        pour_in_cup();
        put_something();
    }
};

//製作咖啡
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

//製作茶
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
    //製作咖啡
    Coffee *coffe = new Coffee();
    coffe->make_drink();
    delete coffe;
    coffe = nullptr;
    //製作茶]
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
