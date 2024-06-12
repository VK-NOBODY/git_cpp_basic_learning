//
// Created by VULCA on 7/6/2024.
//
#include "useful_header_file.h"

using namespace std;

void query_money(string *const name, int *const money) {
    cout << "----------------------Check balance---------------------- " << endl;
    cout << *name << ",the account balance is:" << *money << "\t" << endl;
}

void save_money(string *const name, int *const money, int *const save_moneys) {
    cout << "----------------------Recharge---------------------- " << endl;
    cout << *name << ",Recharge: " << *save_moneys << " YUAN" << "\t" << endl;
    *money += *save_moneys;
    cout << *name << "Recharge successful, account balance is:" << *money << "\t" << endl;
}

void get_money(string *const name, int *const money, int *const get_moneys) {
    cout << "----------------------Withdrawal---------------------- " << endl;
    cout << *name << ",Withdrawal: " << *get_moneys << " YUAN" << "\t" << endl;
    *money -= *get_moneys;
    cout << *name << "Withdrawal successful, account balance is:" << *money << "\t" << endl;
}

int menu(const string *const name) {
    cout << "----------------------Welcome---------------------- " << endl;
    cout << *name << ",hello,welcome to Nobody ATM" << endl;
    cout << "1.Check balance" << endl;
    cout << "2.Recharge" << endl;
    cout << "3.Withdrawal" << endl;
    cout << "4.Exit" << endl;
    cout << "Please enter the number of the function you want to use:" << endl;
    int choice;
    cin >> choice;
    return choice;
}


int main() {
    int *money = new int(5000000);
    string *name = new string;
    cout << "Please enter your name:" << endl;
    cin >> *name;
    int *save_moneys = new int(0);
    int *get_moneys = new int(0);
    int choice = menu(name);
    bool is_run = true;
    while (is_run) {
        switch (choice) {
            case 1:
                query_money(name, money);
                choice = menu(name);
                break;
            case 2:
                cout << "The account balance is: " << *money
                     << ",Please enter the amount of money you want to recharge:"
                     << "\t" << endl;
                cin >> *save_moneys;
                save_money(name, money, save_moneys);
                choice = menu(name);
                break;
            case 3:
                cout << "The account balance is: " << *money
                     << ",Please enter the amount of money you want to withdraw:"
                     << "\t" << endl;
                cin >> *get_moneys;
                get_money(name, money, get_moneys);
                choice = menu(name);
                break;
            case 4:
                is_run = false;
                break;
            default:
                cout << "Please enter the correct number" << "\t" << endl;
                choice = menu(name);
                break;
        }
    }
    delete money;
    money = nullptr;
    delete name;
    name = nullptr;
    delete save_moneys;
    save_moneys = nullptr;
    delete get_moneys;
    get_moneys = nullptr;
    return 0;
}