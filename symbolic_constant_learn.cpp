//
// Created by VULCA on 30/5/2024.
//
#include "useful_header_file.h"
//#include "windows.h"

using namespace std;
#define FAT_BMI 28
#define J2C_RATE 4.19
#define CHOU_AGE 21
#define CHOU_HEIGHT 180.5
#define CHOU_WEIGHT 56

int main() {

//    SetConsoleOutputCP(CP_UTF8);
    //Statements using symbolic constants are normal code and should be written in the main function.
    //How to use: To use symbolic constants, just use its name.
    cout << FAT_BMI << endl;
    cout << "To convert joules to calories you need to divide by:" << J2C_RATE << endl;
    cout << "I am Chou." << "I am" << CHOU_AGE << " age." << endl;
    cout << "my height is " << CHOU_HEIGHT << "cm," << "my weight is " << CHOU_WEIGHT << "kg." << endl;
    return 0;
}