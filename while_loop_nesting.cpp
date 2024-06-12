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
    bool is_today_not_a_lucky_day = true;
    short confession_times = 0;
    while (is_today_not_a_lucky_day) {
        cout << "\nToday is another new day, starting to express my love to Xiaomei" << endl;
        int flowers = 0;
        while (flowers < 3) {
            cout << "Give Xiaomei a rose" << endl;
            ++flowers;
        }
        cout << "Xiao Mei, I like you\n" << endl;
        int random_number = get_random_number(1, 20);
        ++confession_times;
        if (random_number == 1) {
            is_today_not_a_lucky_day = false;
        }
    }
    cout << "Finally the confession was successful!Total number of confessions: " << confession_times << endl;
    return 0;

}