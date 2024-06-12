//
// Created by VULCA on 12/6/2024.
//
#include "useful_header_file.h"

using namespace std;

class Building {
    friend void good_gay(Building *temp_building);

public:
    Building() {
        living_room = "living room";
        bed_room = "bedroom";
    }

    string living_room;
private:
    string bed_room;
};

void good_gay(Building *temp_building) {
    cout << "good_gay building living room is " << temp_building->living_room << endl;
    cout << "good_gay building bedroom is " << temp_building->bed_room << endl;
}

void test_01() {
    Building building;
    good_gay(&building);
}

int main() {
    test_01();
    return 0;
}