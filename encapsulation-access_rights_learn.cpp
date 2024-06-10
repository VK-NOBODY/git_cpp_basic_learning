//
// Created by VULCA on 9/6/2024.
//
#include "header_files/useful_header_file.h"

using namespace std;

//訪問權限
//三種
//公眾權限 public
//保護權限 protected
//私有權限 private
class Person {
public:
    string m_name;
protected:
    string m_car;
private:
    int m_passwd;
//private:
public:
    void function() {
        m_name = "Nobody";
        m_car = "BMW";
        m_passwd = 123456;
    }
};

int main() {
    Person person_01;
    person_01.m_name = "Somebody";
//    person_01.m_car = "VOLVO";//保護權限,類外無法訪問
//    person_01.m_passwd = 123;//私有權限,類外無法訪問
    person_01.function();
    return 0;
}