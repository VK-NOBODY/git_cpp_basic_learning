//
// Created by VULCA on 16/6/2024.
//
#include "iostream"

using namespace std;

//1.普通函數
int my_add_01(int a, int b) {
    return a + b;
}

//2.函數模板
template<typename T>
T my_add_02(T a, T b) {
    return a + b;
}

void test_01() {
    int a = 1;
    int b = 2;
    cout << my_add_01(a, b) << endl;
}

void test_02() {
    int a = 10;
    int b = 20;
    char c = 'c';//a-97 c-99
    cout << my_add_01(a, c) << endl;
    //自動類型推導 不會發生隱式類型轉換
//    cout << my_add_02(a, c) << endl;
    //顯示指定類型 會發生隱式類型轉換
    cout << my_add_02<int>(a, c) << endl;
    //總結 建議使用顯示指定類型 強制發生隱式類型轉換
}

int main() {
//    test_01();
    test_02();
    return 0;
}