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
        //�����Uչ�µĹ���,��Ҫ�޸Ĵ��a
        //���挍�_�l�� �ṩ �_�]ԭ�t
        //�_�]ԭ�t: ���Uչ�M���_��,���޸��M���P�]
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

//���ö��B���FӋ����
//���FӋ���������
//���B��̎:1.�M���Y������;2.���x�ԏ�;3.���ǰ�ں����ڔUչ����,�Լ���S�o�Ը�
class AbstractCalculator {
public:
    virtual int get_result() {
        return 0;
    }

    int number_01, number_02;
};

//�ӷ�Ӌ�����
class AddAbstractCalculator : public AbstractCalculator {
    int get_result() {
        return number_01 + number_02;
    }
};

//�p��Ӌ�����
class SubAbstractCalculator : public AbstractCalculator {
    int get_result() {
        return number_01 - number_02;
    }
};

//�˷�Ӌ�����
class MulAbstractCalculator : public AbstractCalculator {
    int get_result() {
        return number_01 * number_02;
    }
};

//����Ӌ�����
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