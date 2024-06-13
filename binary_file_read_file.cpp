//
// Created by VULCA on 13/6/2024.
//
#include "useful_header_file.h"
#include "fstream"

using namespace std;

class Person {
public:
    char my_name[64];
    int my_age;
};

void test_01() {
    //1.�����^�ļ�
    //2.����������
    ifstream ifs;
    //3.���_�ļ�,�Д��ļ��Ƿ���_�ɹ�
    ifs.open("person1.txt", ios::in | ios::binary);
    if (!ifs.is_open()) {
        cout << "Failed to open file" << endl;
        return;
    }
    //4.�xȡ�ļ�
    Person person;
    ifs.read((char *) &person, sizeof(Person));
    cout << "Name: " << person.my_name << " " << "Age: " << person.my_age << endl;
    //5.�P�]�ļ�
    ifs.close();
}

int main() {
    test_01();
    return 0;
}