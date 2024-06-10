//
// Created by VULCA on 9/6/2024.
//
#include "header_files/useful_header_file.h"

using namespace std;

//If we pass in the data ourselves, we will use our own data. If not, then we will use the default value.
//grammar: function_name(parameter_list[, default_parameter_list]);
int function_01(int a, int b = 10, int c = 30) {
    return a + b + c;
}

//int function_02(int a=10, int b, int c = 30,int d=40){
//    return a + b + c+d;
//}

//Precautions
//1.If there are no default parameters in the parameter list, then the function's parameter list must be exactly the same as the function's definition list.
//2.If a certain location already has a default parameter, then all subsequent parameters will need default parameters.

//3. If the function declaration has default parameters, the function implementation cannot have default parameters.
int function_03(int a = 10, int b = 10);

int function_03(int a, int b) {
    return a + b;
}

int main() {
    cout << function_01(10) << endl;
    cout << function_03() << endl;
    return 0;
}