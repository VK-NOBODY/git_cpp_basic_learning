//
// Created by VULCA on 12/6/2024.
//
#include "useful_header_file.h"

using namespace std;

//
////Java���
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
////Python���
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
////C++���
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

//�^�еĺ�̎: 1. �p�����}�ĳ�ʽ�a 2. �S�o���^��
//�Z����class e���Q : public ���Ae���Q {
//}
//��� Ҳ�Q�� �����
//��� Ҳ�Q�� ���
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