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
    //1.包含頭文件
    //2.創建流對象
    ifstream ifs;
    //3.打開文件,判斷文件是否打開成功
    ifs.open("person1.txt", ios::in | ios::binary);
    if (!ifs.is_open()) {
        cout << "Failed to open file" << endl;
        return;
    }
    //4.讀取文件
    Person person;
    ifs.read((char *) &person, sizeof(Person));
    cout << "Name: " << person.my_name << " " << "Age: " << person.my_age << endl;
    //5.關閉文件
    ifs.close();
}

int main() {
    test_01();
    return 0;
}