//
// Created by VULCA on 13/6/2024.
//
#include "useful_header_file.h"
#include "fstream"

using namespace std;

//二進制文件 寫文件
class Person {
public:

    char my_name[64];
    int m_age;
};

void test_01() {
    //1.包含頭文件
    //2.創建流對象
    //3.打開文件
    ofstream ofs("person.txt", ios::out | ios::binary);

    //4.寫文件
    Person person_01 = {"Nobody", 18};
    ofs.write((const char *) &person_01, sizeof(Person));
    //5.關閉文件
    ofs.close();
}

int main() {
    test_01();
    return 0;
}