//
// Created by VULCA on 13/6/2024.
//
#include "useful_header_file.h"
#include "fstream"

using namespace std;

//���M���ļ� ���ļ�
class Person {
public:

    char my_name[64];
    int m_age;
};

void test_01() {
    //1.�����^�ļ�
    //2.����������
    //3.���_�ļ�
    ofstream ofs("person.txt", ios::out | ios::binary);

    //4.���ļ�
    Person person_01 = {"Nobody", 18};
    ofs.write((const char *) &person_01, sizeof(Person));
    //5.�P�]�ļ�
    ofs.close();
}

int main() {
    test_01();
    return 0;
}