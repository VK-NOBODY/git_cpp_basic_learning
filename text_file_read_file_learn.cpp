//
// Created by VULCA on 13/6/2024.
//
#include "useful_header_file.h"
#include "fstream"

using namespace std;

void test_01() {
    //1.�����^�ļ� fstream
    //2.����������
    ifstream ifs;
    //3.���_�ļ� �K���Д��Ƿ���_�ɹ�
    ifs.open("test.txt", ios::in);
    if (!ifs.is_open()) {
        cout << "Failed to open file" << endl;
        return;
    }
    //4.�x����

    //��һ�N
//    char buffer[1024] = {0};
//    while (ifs >> buffer) {
//        cout << buffer << endl;
//    }

    //�ڶ��N
//    char buffer[1024] = {0};
//    while (ifs.getline(buffer, sizeof(buffer))) {
//        cout << buffer << endl;
//    }

    //�����N
//    string buffer;
//    while (getline(ifs, buffer)) {
//        cout << buffer << endl;
//    }

    //���ķN
    char c;
    while ((c = ifs.get()) != EOF) {
        cout << c;
    }

    //5.�P�]�ļ�
    ifs.close();
}

int main() {
    test_01();
    return 0;
}