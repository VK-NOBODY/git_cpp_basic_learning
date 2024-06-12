//
// Created by VULCA on 12/6/2024.
//
#include "useful_header_file.h"

using namespace std;

//
////Java頁面
//class Java {
//public:
//    void header() {
//        cout << "Home Page Open Class Login Register... (Public Header)" << endl;
//    }
//
//    void footer() {
//        cout << "Help Center Communication and Cooperation Site Map... (Public tail)" << endl;
//    }
//
//    void left() {
//        cout << "Java Python C++...(Public category list)" << endl;
//    }
//
//    void content() {
//        cout << "Java subject video" << endl;
//    }
//};
//
////Python頁面
//class Python {
//public:
//    void header() {
//        cout << "Home Page Open Class Login Register... (Public Header)" << endl;
//    }
//
//    void footer() {
//        cout << "Help Center Communication and Cooperation Site Map... (Public tail)" << endl;
//    }
//
//    void left() {
//        cout << "Java Python C++...(Public category list)" << endl;
//    }
//
//    void content() {
//        cout << "Python subject video" << endl;
//    }
//};
//
////C++頁面
//class Cpp {
//public:
//    void header() {
//        cout << "Home Page Open Class Login Register... (Public Header)" << endl;
//    }
//
//    void footer() {
//        cout << "Help Center Communication and Cooperation Site Map... (Public tail)" << endl;
//    }
//
//    void left() {
//        cout << "Java Python C++...(Public category list)" << endl;
//    }
//
//    void content() {
//        cout << "C++ subject video" << endl;
//    }
//};

//繼承的好處: 1. 減少重複的程式碼 2. 維護性較高
//語法：class 類別名稱 : public 基礎類別名稱 {
//}
//子類 也稱為 派生類
//父類 也稱為 基類
class BassPage {
public:
    void header() {
        cout << "Home Page Open Class Login Register... (Public Header)" << endl;
    }

    void footer() {
        cout << "Help Center Communication and Cooperation Site Map... (Public tail)" << endl;
    }

    void left() {
        cout << "Java Python C++...(Public category list)" << endl;
    }
};

class Java : public BassPage {
public:
    void content() {
        cout << "Java subject video" << endl;
    }
};

class Python : public BassPage {
public:
    void content() {
        cout << "Python subject video" << endl;
    }
};

class Cpp : public BassPage {
public:
    void content() {
        cout << "C++ subject video" << endl;
    }
};

void test_01() {
    cout << "The Java download video page is as follows: " << endl;
    Java java;
    java.header();
    java.left();
    java.content();
    java.footer();
    cout << "------------------------------------------------------" << endl;
    cout << "The Python download video page is as follows: " << endl;
    Python python;
    python.header();
    python.left();
    python.content();
    python.footer();
    cout << "------------------------------------------------------" << endl;
    cout << "The C++ download video page is as follows: " << endl;
    Cpp cpp;
    cpp.header();
    cpp.left();
    cpp.content();
    cpp.footer();
}

int main() {
    test_01();
    return 0;
}