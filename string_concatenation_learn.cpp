//
// Created by VULCA on 31/5/2024.
//
#include "useful_header_file.h"

using namespace std;

int main() {

    string name = "Xiaohei";
    string major = "Physics";
    int age = 21;
    double height = 172.50;
    // to_string() function can convert memory to string type, usage: to_string (detail)
    string msg =
            "I am: " + name + ",My major is: " + major + ", the age is: " + to_string(age) + ",height is: " +
            to_string(height);
    cout << msg << endl;
}