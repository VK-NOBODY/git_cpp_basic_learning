//
// Created by VULCA on 12/6/2024.
//
#include "useful_header_file.h"

using namespace std;

//�����\������d
class Person {
    friend ostream &operator<<(ostream &temp_cout, Person &temp_p);
public:
    Person(int temp_a_01, int temp_b_01){
        a_01 = temp_a_01;
        b_01 = temp_b_01;
    }
private:
    //���óɆT�������d�����\���
    //�������óɆT���������d�����\���,���o�����Fcout����߅
//    void operator<<(cout){
//
//    }
    int a_01;
    int b_01;
};

ostream &operator<<(ostream &temp_cout, Person &temp_p) {
    cout << "a_01=" << temp_p.a_01 << ";" << "b_01=" << temp_p.b_01 << endl;
    return temp_cout;
}

void test_01() {
    Person p_01(10,20);
//    p_01.a_01 = 10;
//    p_01.b_01 = 20;
    cout << p_01;
}

int main() {
    test_01();
    return 0;
}