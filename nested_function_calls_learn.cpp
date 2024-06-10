//
// Created by VULCA on 6/6/2024.
//
#include "header_files/useful_header_file.h"

using namespace std;

int get_random_number() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 3);
    return dis(gen);
}

void send_breakfast() {

    cout << "Xiaomei, I bought you breakfast!" << endl;
}

void send_flowers() {

    cout << "Xiaomei, I bought you a rose, you are so beautiful!" << endl;
}

void vindicate() {
    cout << "Xiaomei, I like you very much!" << endl;
}

void see_a_movie() {
    cout << "Xiaomei, let's go see a movie together!" << endl;
}

void i_like_you(int number) {

    switch (number) {
        case 1:
            send_breakfast();
            send_flowers();
            vindicate();
            see_a_movie();
            break;
        case 2:
            send_flowers();
            send_breakfast();
            vindicate();
            see_a_movie();
            break;
        case 3:
            send_flowers();
            vindicate();
            send_breakfast();
            see_a_movie();
            break;
        default:
            cout << "Xiaomei, I want to fuck you!" << endl;
    }
}

int main() {
    for (int i = 0; i < 10; ++i) {

        i_like_you(get_random_number());
        cout << endl;
    }
    return 0;
}