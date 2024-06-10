//
// Created by VULCA on 2/6/2024.
//
#include "header_files/useful_header_file.h"

using namespace std;

int main() {
////Please enter the numbers 1-7 to tell what day of the week today is
//    cout << "Please enter the numbers 1-7 to tell what day of the week today is" << endl;
//    int week_day;
//    cin >> week_day;
//    switch (week_day) {
//        case 1:
//            cout << "Today is Monday" << endl;
//            break;
//        case 2:
//            cout << "Today is Tuesday" << endl;
//            break;
//        case 3:
//            cout << "Today is Wednesday" << endl;
//            break;
//        case 4:
//            cout << "Today is Thursday" << endl;
//            break;
//        case 5:
//            cout << "Today is Friday" << endl;
//            break;
//        case 6:
//            cout << "Today is Saturday" << endl;
//            break;
//        case 7:
//            cout << "Today is Sunday" << endl;
//            break;
//        default:
//            cout << "Input error" << endl;
//            //Wait for 5 seconds and re-execute the main function
//            main();
//}
//Please rate the movie: 10-9 points are excellent, 8-7 points are average, 6-5 points are ordinary, and less than 5 points are garbage
    cout
            << "Please rate the movie 10-9 points is excellent, 8-7 points is average, 6-5 points is ordinary, and less than 5 points is garbage: "
            << endl;
    int movie_score;
    cin >> movie_score;
    switch (movie_score) {
        case 10:
        case 9:
            cout << "Excellent" << endl;
            break;
        case 8:
        case 7:
            cout << "General" << endl;
            break;
        case 6:
            cout << "Normal" << endl;
            break;
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
            cout << "Garbage" << endl;
            break;
        default:
            cout << "Input error" << endl;
            //Wait for 5 seconds and re-execute the main function
            main();
    }
    return 0;
}