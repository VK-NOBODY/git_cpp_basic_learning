//
// Created by VULCA on 1/6/2024.
//
#include "header_files/useful_header_file.h"

using namespace std;

int main() {

    //==equal,!=unequal <less than>greater than <=less than or equal>=greater than or equal to
    int num_01 = 3;
    int num_02 = 5;
    bool result_01 = num_01 == num_02;
    bool result_02 = num_01 != num_02;
    cout << "num_01== num_02" << result_01 << endl;
    cout << "num_01!=num_02" << result_02 << endl;


    cout << "3<5: " << (3 < 5) << endl;
    cout << "3>5: " << (3 > 5) << endl;
    cout << "3<=5: " << (3 <= 5) << endl;
    cout << "3>5: " << (3 >= 5) << endl;

    char example_01[] = "hello";
    char *example_02 = "hello";
    cout << "example_01 == example_02: " << (example_01 == example_02) << endl;

    cout << "example_01=example_02?: " << strcmp(example_01, example_02) << endl;

    char example_03[] = "a";
    char *example_04 = "b";
    cout << "Comparison result between example_03 and example_04: " << strcmp(example_03, example_04) << endl;

    cout << "Is the string literal c greater than a?: " << strcmp("c", "a") << endl;

    string example_05 = "a";
    char example_06[] = "a";
    cout << "Is example_05 equal to example_06?: " << (example_05 == example_06) << endl;

    return 0;
}