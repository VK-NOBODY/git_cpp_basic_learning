//
// Created by VULCA on 13/6/2024.
//
#include "useful_header_file.h"

using namespace std;

class Calculator {
public:
    int get_result(string operation) {
        if (operation == "+") {
            return number_01 + number_02;
        } else if (operation == "-") {
            return number_01 - number_02;
        } else if (operation == "*") {
            return number_01 * number_02;
        } else if (operation == "/") {
            return number_01 / number_02;
        } else {
            return 0;
        }
        //如果想擴展新的功能,需要修改代碼
        //在真實開發中 提供 開閉原則
        //開閉原則: 對擴展進行開放,對修改進行關閉
    }

public:
    int number_01, number_02;
};

void test_01() {
    Calculator calculator;
    calculator.number_01 = 10;
    calculator.number_02 = 5;
    cout << "number_01+number_02 = " << calculator.get_result("+") << endl;
    cout << "number_01-number_02 = " << calculator.get_result("-") << endl;
    cout << "number_01*number_02 = " << calculator.get_result("*") << endl;
    cout << "number_01/number_02 = " << calculator.get_result("/") << endl;
}

//利用多態實現計算器
//實現計算器抽象類
//多態好處:1.組織結構清晰;2.可讀性強;3.對於前期和後期擴展有利,以及為維護性高
class AbstractCalculator {
public:
    virtual int get_result() {
        return 0;
    }

    int number_01, number_02;
};

//加法計算器類
class AddAbstractCalculator : public AbstractCalculator {
    int get_result() {
        return number_01 + number_02;
    }
};

//減法計算器類
class SubAbstractCalculator : public AbstractCalculator {
    int get_result() {
        return number_01 - number_02;
    }
};

//乘法計算器類
class MulAbstractCalculator : public AbstractCalculator {
    int get_result() {
        return number_01 * number_02;
    }
};

//除法計算器類
class DivAbstractCalculator : public AbstractCalculator {
    int get_result() {
        return number_01 / number_02;
    }
};

void test_02() {
    AbstractCalculator *calculator_01 = new AddAbstractCalculator();
    calculator_01->number_01 = 10;
    calculator_01->number_02 = 5;
    cout << "number_01+number_02 = " << calculator_01->get_result() << endl;
    delete calculator_01;
    calculator_01 = nullptr;
    calculator_01 = new SubAbstractCalculator();
    calculator_01->number_01 = 10;
    calculator_01->number_02 = 5;
    cout << "number_01-number_02 = " << calculator_01->get_result() << endl;
    delete calculator_01;
    calculator_01 = nullptr;
    calculator_01 = new MulAbstractCalculator();
    calculator_01->number_01 = 10;
    calculator_01->number_02 = 5;
    cout << "number_01*number_02 = " << calculator_01->get_result() << endl;
    delete calculator_01;
    calculator_01 = nullptr;
    calculator_01 = new DivAbstractCalculator();
    calculator_01->number_01 = 10;
    calculator_01->number_02 = 5;
    cout << "number_01/number_02 = " << calculator_01->get_result() << endl;
    delete calculator_01;
    calculator_01 = nullptr;
}

int main() {
//    test_01();
    test_02();
    return 0;
}