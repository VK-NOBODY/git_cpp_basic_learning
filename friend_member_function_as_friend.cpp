//
// Created by VULCA on 12/6/2024.
//
#include "useful_header_file.h"

using namespace std;

class Building;

class GoodGay {
public:
    GoodGay();

    ~GoodGay();

    void visit_01();

    void visit_02();

    Building *building;
};

class Building {
    friend void GoodGay::visit_01();
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
void GoodGay::visit_01() {
    cout << "visit_01: " << building->living_room << endl;
    cout << "visit_01: " << building->bed_room << endl;
}
void GoodGay::visit_02() {
    cout << "visit_02: " << building->living_room << endl;
//    cout << "visit_02: " << building->bed_room << endl;
}
GoodGay::~GoodGay() {
    if (building != nullptr) {
        delete building;
        building = nullptr;
    }
}
void test_01(){
    GoodGay goodgay;
    goodgay.visit_01();
    goodgay.visit_02();
}
int main() {
    test_01();
    return 0;
}