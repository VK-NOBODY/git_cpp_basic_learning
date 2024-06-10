//
// Created by VULCA on 2/6/2024.
//
#include "header_files/useful_header_file.h"

using namespace std;

int main() {
    cout << "I'm a little fat and need to lose 10 pounds. Plan for 5 days and target 2 pounds every day. Come on!"
         << endl;
    int day = 1;
    int lose_weight = 0;
    while (day <= 5) {// 5 days
        cout << "Today is the day to lose weight day " << day << endl;
        //Triple control of push-ups
        int pushup = 1;
        while (pushup <= 3) {// 3 push-ups
            cout << "Today is losing weight day " << day << ".Push-ups:" << pushup
                 << "; ";
            ++pushup;
        }
        lose_weight += 1;
        cout << endl;
        cout << "Today is losing weight day " << day << " and finished 3 push-ups" << ".Lose weight:" << lose_weight
             << endl;

        int run_times = 1;
        while (run_times <= 4) {// 4 runs
            cout << "Today is losing weight day " << day << ".Run:" << run_times << "; ";
            ++run_times;
        }
        lose_weight += 1;
        cout << endl;
        cout << "Today is losing weight day " << day << " and finished 4 runs" << ".Lose weight:" << lose_weight
             << endl;
        cout << endl;
        ++day;
    }
    cout << "Finally done!" << endl;
    return 0;
}