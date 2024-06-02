//
// Created by VULCA on 2/6/2024.
//
#include "useful_header_file.h"

using namespace std;

int main() {
//Ask the children what color they like: choose one of three colors: red, yellow and blue
    enum Color {
        red = 1, yellow, blue
    };

    int number_01;//The number of the color
    cout << "Children, what colors do you like? (1: red, 2: yellow, 3: blue)?: " << endl;//Ask the children what color they like
    cin >> number_01;

    switch (number_01) {//Determine the color
        case red:
            cout << "Children like red!" << endl;
            break;
        case yellow:
            cout << "Children like yellow!" << endl;
            break;
        case blue:
            cout << "Children like blue!" << endl;
            break;
        default:
            cout << "The number you entered is wrong. I don't know what color you like. Please re-enter." << endl;//Ask the children what color they like
            main();
    }

    return 0;
}