//
// Created by VULCA on 2/6/2024.
//
#include "header_files/useful_header_file.h"

using namespace std;

int main() {
    //Now there are three girls, Xiaomei, Xiaotian, and Xiaoxin. Define three bool values, Xiaomei, Xiaotian. Does Xiaoxin like me?
    bool mei;
    bool tian;
    bool xin;
    bool weather;
    //If Xiaomei likes me, then I will confess to her. After the confession is successful, if the weather is good tomorrow, then I will take Xiaomei for an outing tomorrow. If the weather is bad tomorrow, then I will take Xiaomei to a movie. If If Xiao Mei doesn��t like me, then I will confess my love to Xiao Tian. After the confession is successful, if the weather is good tomorrow, then I will take Xiao Tian for an outing tomorrow. If the weather is bad tomorrow, I will take Xiao Tian to a movie. If Xiao Mei If Tian doesn't like me, then I will confess my love to Xiaoxin. After the confession is successful, if the weather is good tomorrow, then I will take Xiaoxin for an outing tomorrow. If the weather is bad tomorrow, I will take Xiaoxin to a movie.
//Please enter what the weather will be like tomorrow
    cout << "Please enter tomorrow's weather(1 or 0): " << endl;
    cin >> weather;
    cout << "Please enter, does Xiaomei like me?(1 or 0): " << endl;
    cin >> mei;
    cout << "Please enter, does Xiaotian like me?(1 or 0): " << endl;
    cin >> tian;
    cout << "Please enter, does Xiaoxin like me?(1 or 0): " << endl;
    cin >> xin;
    if (mei) {
        cout << "I'm going to confess to Xiaomei" << endl;
        if (weather) {
            cout << "I'll take Xiaomei for an outing" << endl;
        } else {
            cout << "I took Xiaomei to watch a movie" << endl;
        }
    } else if (tian) {
        cout << "I'm going to confess to Xiaotian" << endl;
        if (weather) {
            cout << "I'll take Xiaotian for an outing" << endl;
        } else {
            cout << "I took Xiaotian to watch a movie" << endl;
        }
    } else if (xin) {
        cout << "I'm going to confess to Xiaoxin" << endl;
        if (weather) {
            cout << "I will take Xiaoxin for an outing" << endl;
        } else {
            cout << "I took Xiaoxin to watch a movie" << endl;
        }
    }


    return 0;
}