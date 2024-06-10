//
// Created by VULCA on 3/6/2024.
//
#include "header_files/useful_header_file.h"

using namespace std;

int get_random_number(int min, int max) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(min, max);
    return dis(gen);
}

int main() {
    int money = 1000000;
    int payment;
    for (int id = 1; id <= 100; ++id) {
        int score = get_random_number(1, 10);
        if (score < 5) {
            cout << "Sorry, employee: " << id << ", your performance is not up to standard, the performance score is: "
                 << score << ", please come back next month to get your salary" << endl;
            cout << endl;
            continue;
        } else {
            payment = score * 1000;
        }
        if (money < payment) {
            cout << "The money used to pay wages has been used up, please come back next month to collect it" << endl;
            break;
        } else {
            cout << "Congratulations, employee: " << id
                 << ", your performance this month has reached the standard, your performance score is: " << score
                 << ", now you are receiving salary: " << payment
                 << "YUAN" << endl;
            money -= payment;
            cout << "Now the money used to pay wages still have : " << money << "YUAN" << endl;
            cout << endl;
        }
    }
    cout << money << endl;
    return 0;
}