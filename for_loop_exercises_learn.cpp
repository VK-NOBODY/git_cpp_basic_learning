//
// Created by VULCA on 3/6/2024.
//
#include "useful_header_file.h"

using namespace std;

int get_random_number(int min, int max) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(min, max);
    return dis(gen);
}

int main() {

    int number = get_random_number(1, 10);

    int guess_number;
    cout << "Please enter a number: " << endl;
    cin >> guess_number;

    for (bool is_not_correct = true; is_not_correct;) {
        if (guess_number == number) {
            cout << "Guessed it right" << endl;
            is_not_correct = false;
        } else if (guess_number > number) {
            cout << "Guessed wrong, the number is smaller than the number you guessed" << endl;
            cout << "Please enter a number: " << endl;
            cin >> guess_number;
        } else {
            cout << "Guessed wrong, the number is greater than the number you guessed" << endl;
            cout << "Please enter a number: " << endl;
            cin >> guess_number;
        }
    }

    return 0;
}