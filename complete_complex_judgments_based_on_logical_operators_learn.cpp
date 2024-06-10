//
// Created by VULCA on 2/6/2024.
//
#include "header_files/useful_header_file.h"

using namespace std;

int main() {
////Please enter a number
//    cout << "Please enter a number (1 or 0)" << endl;
//    int number;
//    cin >> number;
//    if (number) {
//        cout << "if is executed" << endl;
//    } else {
//        cout << "else is executed" << endl;
//    }
    int age, height;
//Please enter your age
    cout << "Please enter your age" << endl;
    cin >> age;
//Please enter your height
    cout << "Please enter your height" << endl;
    cin >> height;
////If you are younger than 12 years old or your height is less than 120cm, you can play for free
//    if (age < 12 || height < 120) {
//        cout << "You can play for free" << endl;
//    } else {
//        cout << "Cannot play for free" << endl;
//    }
//If you are older than 12 years old and your height is greater than 120cm, you can play for free
    if (age > 12 && height > 120) {
        cout << "You can play for free" << endl;
    } else {
        cout << "Cannot play for free" << endl;
    }
    return 0;
}