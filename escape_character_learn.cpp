//
// Created by VULCA on 31/5/2024.
//
#include "useful_header_file.h"

using namespace std;

int main() {

    //Escape characters: use \ as the beginning of ordinary characters, convert their meanings, and compare them to obtain the functions of control characters in the ASCII table
    // \n newline, \t tab \\ represents a backslash itself \' represents a single quote \" represents a double quote
    cout << "Hello \n I like you" << endl;
    cout << "----------" << endl;

    // \tTab demonstration, the effect is equivalent to the keyboard's tab key, one \t can be supplemented to 8 characters
    cout << "hello\tnobody" << endl;
    cout << "a\titcast" << endl;
    cout << "----------" << endl;

    // When you need to print \ itself you need \\
    cout << "\\" << endl;

    cout << "\"   \'" << endl;
    return 0;
}