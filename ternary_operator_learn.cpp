//
// Created by VULCA on 1/6/2024.
//
#include "useful_header_file.h"

using namespace std;

int main() {
    int num_01, num_02;
    cout << "Please enter the value of num_01: " << endl;
    cin >> num_01;
    cout << "Please enter the value of num_02: " << endl;
    cin >> num_02;
    string value = num_01 > num_02 ? "num_01 is greater than num_02" : "num_01 is less than num_02";
    cout << value << endl;
    return 0;
}