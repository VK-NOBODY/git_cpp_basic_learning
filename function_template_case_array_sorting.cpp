//
// Created by VULCA on 16/6/2024.
//
#include "iostream"

using namespace std;

//實現通用 對數組進行排序的函數
//規則 從大到小
//算法選擇
//測試 char 數組 int數組

//交換函數模板
template<typename T>
void my_swap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

//排序算法
template<typename T>
void my_sort(T array[], int length) {
    for (int i = 0; i < length; ++i) {
        for (int j = i + 1; j < length; ++j) {
            if (array[i] < array[j]) {
                T temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

template<typename T>
void cout_array(T array[], int length) {
    for (int i = 0; i < length; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}


//測試
void test_01() {
    //測試char數組
    char char_array[] = "badcfe";
    int number = sizeof(char_array) / sizeof(char_array[0]);
    my_sort(char_array, number);
    cout_array(char_array, number);
}

void test_02() {
    //測試int數組
    int int_array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int number = sizeof(int_array) / sizeof(int_array[0]);
    my_sort(int_array, number);
    cout_array(int_array, number);
}

int main() {
//    test_01();
    test_02();
    return 0;
}