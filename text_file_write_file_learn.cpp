//
// Created by VULCA on 13/6/2024.
//
#include "useful_header_file.h"

using namespace std;

//�ı��ļ� ���ļ�
void test_01() {
    //1.�����^�ļ� fstream

    //2.����������
    ofstream ofs;
    //3.ָ�����_��ʽ
    ofs.open("test.txt", ios::out);
    //4.������
    ofs << "Name: Nobody" << endl;
    ofs << "Sex: Male" << endl;
    ofs << "Age: 18" << endl;
    ofs.close();
}

int main() {
    test_01();
    return 0;
}