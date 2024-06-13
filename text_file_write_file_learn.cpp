//
// Created by VULCA on 13/6/2024.
//
#include "useful_header_file.h"

using namespace std;

//文本文件 寫文件
void test_01() {
    //1.包含頭文件 fstream

    //2.創建流對象
    ofstream ofs;
    //3.指定打開方式
    ofs.open("test.txt", ios::out);
    //4.寫內容
    ofs << "Name: Nobody" << endl;
    ofs << "Sex: Male" << endl;
    ofs << "Age: 18" << endl;
    ofs.close();
}

int main() {
    test_01();
    return 0;
}