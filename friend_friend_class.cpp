//
// Created by VULCA on 12/6/2024.
//
#include "useful_header_file.h"

using namespace std;

class Building;

class GoodGay {
public:
    GoodGay();

    void visit();

    Building *building;
};

class Building {
    friend class GoodGay;

public:
    Building();

public:
    string living_room;
private:
    string bed_room;
};

Building::Building() {
    living_room = "living room";
    bed_room = "bed room";
}

GoodGay::GoodGay() {
    building = new Building();
}

void GoodGay::visit() {
    cout << "GoodGay class is calling " << building->living_room << endl;
    cout << "GoodGay class is calling " << building->bed_room << endl;
}

void test_01() {
    GoodGay goodgay;
    goodgay.visit();
}

int main() {
    test_01();
    return 0;
}