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

    int array[10];
    int cin_number;
    int right_count = 0;
    for (int i = 0; i < 10; ++i) {
        array[i] = get_random_number(1, 10);
    }

    for (int i = 0; i < 10; i++) {
        cout << "Please " << i + 1 << " times enter number: ";
        cin >> cin_number;
        if (cin_number == array[i]) {
            ++right_count;
        }
    }
    cout << "You got " << right_count << " right times" << endl;
    return 0;
}