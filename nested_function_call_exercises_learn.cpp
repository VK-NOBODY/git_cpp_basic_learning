//
// Created by VULCA on 6/6/2024.
//
#include "useful_header_file.h"

using namespace std;

int get_min(int a, int b) {
    return a < b ? a : b;
}

int get_max(int a, int b) {
    return a > b ? a : b;
}

struct MinandMax {
    int min;
    int max;
};

struct MinandMax get_min_max(int a, int b) {
    int min = get_min(a, b);
    int max = get_max(a, b);
    struct MinandMax min_max = {min, max};
    return min_max;
}

int main() {
    struct MinandMax min_max = get_min_max(10, 20);
    cout << "Min: " << min_max.min << endl;
    cout << "Max: " << min_max.max << endl;
    return 0;
}