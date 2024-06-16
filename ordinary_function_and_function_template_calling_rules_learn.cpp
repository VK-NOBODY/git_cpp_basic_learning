//
// Created by VULCA on 16/6/2024.
//
#include "iostream"

using namespace std;

//普通函數與函數模板調用規則
//1.如果函數模板和普通函數都可以調用,優先調用普通函數
//2.可以通過空模板參數列表 強制調用 函數模板
//3.函數模板可以發生函數重載
//4.如果函數模板可以產生更好的匹配,優先調用函數模板
void my_cout(int a, int b) {
    cout << "my_cout_normal" << endl;
}

template<class T>
void my_cout(T a, T b) {
    cout << "my_cout_template" << endl;
}

template<class T>
void my_cout(T a, T b, T c) {
    cout << "my_cout_template_abc" << endl;
}

void test_01() {
//    my_cout(1, 2);
//    //通過空模板參數列表 強制調用 函數模板
//    my_cout<>(1, 2);
//    //函數模板可以發生函數重載
//    my_cout(1, 2, 3);
    //如果函數模板可以產生更好的匹配,優先調用函數模板
    char a = 'a';
    char b = 'b';
    my_cout(a, b);
}

int main() {
    test_01();
    return 0;
}