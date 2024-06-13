//
// Created by VULCA on 13/6/2024.
//
#include "useful_header_file.h"
#include "fstream"

using namespace std;

void test_01() {
    //1.包含頭文件 fstream
    //2.創建流對象
    ifstream ifs;
    //3.打開文件 並且判斷是否打開成功
    ifs.open("test.txt", ios::in);
    if (!ifs.is_open()) {
        cout << "Failed to open file" << endl;
        return;
    }
    //4.讀數據

    //第一種
//    char buffer[1024] = {0};
//    while (ifs >> buffer) {
//        cout << buffer << endl;
//    }

    //第二種
//    char buffer[1024] = {0};
//    while (ifs.getline(buffer, sizeof(buffer))) {
//        cout << buffer << endl;
//    }

    //第三種
//    string buffer;
//    while (getline(ifs, buffer)) {
//        cout << buffer << endl;
//    }

    //第四種
    char c;
    while ((c = ifs.get()) != EOF) {
        cout << c;
    }

    //5.關閉文件
    ifs.close();
}

int main() {
    test_01();
    return 0;
}