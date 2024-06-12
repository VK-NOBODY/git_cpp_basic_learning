//
// Created by VULCA on 2/6/2024.
//
#include "useful_header_file.h"

using namespace std;

int main() {

//1. Provide random numbers from 1-10 for guessing
    srand(time(NULL));
    int number = rand() % 10 + 1;

//2. Provide a variable to record the guessed number
    int guess_number;
    //3. Receive the first guessed number through cin
    cout << "Please enter a number" << endl;
    cin >> guess_number;

    //4. Use if else else if to judge. The first time is to judge whether the guessed number is correct. If the guess is correct, the program ends. If the guess is wrong, the next guess is entered. If the second guess is correct, the program ends. If the guess is wrong, it goes to the next guess. If the third guess is correct, the program ends. If the guess is wrong, it prompts that the three guesses have been used up and the correct answer is displayed.
    if (guess_number == number) {
        cout << "Guessed it right" << endl;
    } else if (guess_number != number) {
        cout << "Guessed wrong" << endl;
        cout << "Please enter a number" << endl;
        cin >> guess_number;
        if (guess_number == number) {
            cout << "Guessed it right" << endl;
        } else if (guess_number != number) {
            cout << "Guessed wrong" << endl;
            cout << "Please enter a number" << endl;
            cin >> guess_number;
            if (guess_number == number) {
                cout << "Guessed it right" << endl;
            } else {
                cout << "Guessed wrong" << endl;
                cout << "After three chances, the correct answer is: " << number << endl;
            }
        }
    }
    return 0;
}

