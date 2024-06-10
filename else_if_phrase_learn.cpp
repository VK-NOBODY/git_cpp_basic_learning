//
// Created by VULCA on 2/6/2024.
//
#include "header_files/useful_header_file.h"

using namespace std;

int main() {
//Define the bool values of Xiaomei, Xiaotian and Xiaoxin.
    bool mei = false;
    bool tian = false;
    bool xin = true;
    //Judge whether Xiaomei likes me. If Xiaomei likes me, then I will confess to her.
    if (mei) {
        cout << "I confess my love to Xiaomei" << endl;
    }
        //If Xiaomei doesn't like me, determine whether Xiaotian likes me. If Xiaotian likes me, then I will confess to her.
    else if (tian) {
        cout << "I confess my love to Xiaotian" << endl;
    }
        //If Xiaotian doesn't like me either, determine whether Xiaoxin likes me. If Xiaoxin likes me, then I will confess to her.
    else if (xin) {
        cout << "I confess my love to Xiaoxin" << endl;
    }


    return 0;
}