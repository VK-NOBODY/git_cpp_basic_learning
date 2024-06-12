//
// Created by VULCA on 2/6/2024.
//
#include "useful_header_file.h"

using namespace std;

//Generate random number function random
int get_random_number(short min, short max) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(min, max);
    return dis(gen);
}

int main() {
    short random_number = get_random_number(1, 100);
    cout << "The random number is: " << random_number << endl;
    short guess_number;
    short guess_count = 0;
    //Let the user guess
    do {
        cout << "Please enter a number from 1 to 100: " << endl;
        cin >> guess_number;
        ++guess_count;

        if (guess_number > random_number) {
            cout << "Guessed wrong, the number is too big" << endl;
        } else if (guess_number < random_number) {
            cout << "Guessed wrong, the number is too small" << endl;
        } else {
            cout << "Congratulations on guessing correctly" << endl;
            cout << "You guessed the number in " << guess_count << " times" << endl;
        }
    } while (guess_number != random_number);
    return 0;
}