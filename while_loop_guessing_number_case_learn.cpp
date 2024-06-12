//
// Created by VULCA on 2/6/2024.
//
#include "useful_header_file.h"

using namespace std;

//Generate random number function random
int get_random_number(int min, int max) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(min, max);
    return dis(gen);
}

int main() {
    //while loop guess numbers
    int guess, guess_number, guess_count = 0;
    guess_number = get_random_number(1, 100);
    while (true) {
        cout << "Please enter a number:";
        cin >> guess;
        //Count the number of guesses
        ++guess_count;
        if (guess == guess_number) {
            cout << "Congratulations on guessing it right!" << endl;
            cout << "You have guessed " << guess_count << " times." << endl;
            break;
        } else if (guess < guess_number) {
            cout << "The guessed number is less than the answer, please try again." << endl;
        } else {
            cout << "The guessed number is greater than the answer, please try again." << endl;
        }
    }
    return 0;
}