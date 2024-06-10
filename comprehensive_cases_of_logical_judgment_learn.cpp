//
// Created by VULCA on 2/6/2024.
//
#include "header_files/useful_header_file.h"

using namespace std;

//Create a random integer generating function
int random_number(int min, int max) {
    random_device rd;                          // Obtain a random number from hardware
    mt19937 gen(rd());                         // Seed the generator
    uniform_int_distribution<> distr(min, max);
    return distr(gen);
//    return min + rand() % (max - min + 1);
}


int main() {
    int number = random_number(1, 10);
    cout << "The number of the card is " << number << endl;
    string color = random_number(0, 1) ? "red" : "black";
    string suit;
    if (color == "red") {
        suit = random_number(0, 1) ? "diamond" : "heart";
    } else {
        suit = random_number(0, 1) ? "club" : "spade";
    }//Please enter the guessed poker number
    cout << "Please enter the guessed poker number: ";
    int guess;
    cin >> guess;
    if (guess != number) {//If the guessed number is not correct, enter the correct number
        for (int i = 0; i < 2; ++i) {
            cout << "The guessed poker number is incorrect, please re-enter: ";
            cin >> guess;
            if (guess == number) {
                break;
            } else if (i == 1) {
                cout << "You have guessed the wrong card three times, please try again!" << endl;
                return 0;
            }
        }
    }
    cout << "The guessed poker number is correct, please enter the guessed poker color: ";
    string guess_color;
    cin >> guess_color;
    if (guess_color != color) {//If the guessed color is not correct, enter the correct color
        for (int i = 0; i < 2; ++i) {
            cout << "The guessed poker color is incorrect, please re-enter: ";
            cin >> guess_color;
            if (guess_color == color) {
                break;
            } else if (i == 1) {
                cout << "You have guessed the wrong card three times, please try again!" << endl;
                return 0;
            }
        }
    }
    cout << "The guessed poker color is correct, please enter the guessed poker suit: ";
    string guess_suit;
    cin >> guess_suit;
    if (guess_suit != suit) {
        for (int i = 0; i < 2; ++i) {//If the guessed suit is not correct, enter the correct suit
            cout << "The guessed pokersuit is incorrect, please re-enter: ";
            cin >> guess_suit;
            if (guess_suit == suit) {
                break;
            } else if (i == 1) {
                cout << "You have guessed the wrong card three times, please try again!" << endl;
                return 0;
            }
        }
    }
//The guessed poker suit is correct, then output the guess result
    cout << "The guess result is: " << number << " " << color << " " << suit <<
         endl;
}

