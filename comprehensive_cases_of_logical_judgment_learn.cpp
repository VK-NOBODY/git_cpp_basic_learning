//
// Created by VULCA on 2/6/2024.
//
#include "useful_header_file.h"

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
    //Determine whether the guessed poker number is correct. If it is incorrect, ask for re-entering.
    while (guess != number) {
        cout << "The guessed poker number is incorrect, please re-enter: ";
        cin >> guess;
    }
    //If the guessed poker card number is correct, the guessed poker card suit is required. If the guessed poker card suit is incorrect, re-enter is required.
    cout << "Please enter the guessed poker color: ";
    string guess_color;
    cin >> guess_color;
    while (guess_color != color) {
        cout << "The guessed poker card color is incorrect, please re-enter: ";
        cin >> guess_color;
    }
    //If the guessed poker color is correct, then the guessed suit is required. If the guessed suit is incorrect, then re-enter is required.
    cout << "Please enter the guessed poker suit: ";
    string guess_suit;
    cin >> guess_suit;
    while (guess_suit != suit) {
        cout << "The guessed poker suit is incorrect, please re-enter: ";
        cin >> guess_suit;
    }
    //The guessed poker suit is correct, then output the guess result
    cout << "The guess result is: " << number << " " << color << " " << suit << endl;

    return 0;
}