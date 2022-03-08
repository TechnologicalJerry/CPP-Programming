// ATMApplication.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
using namespace std;

void showMenu() {
    cout << "*********MENU********* \n";
    cout << "1. Check balance \n";
    cout << "2. Deposit \n";
    cout << "3. Withdraw \n";
    cout << "4. Exit \n";
    cout << "********************** \n";
}

int main()
{
    // Check Balanve, Deposit, Withdraw, Show menu
    int option;
    double balance = 100;

    do {
        showMenu();
        cout << "Option: ";
        cin >> option;
        system("cls");
        switch (option) {
        case 1: cout << "Balance is: " << balance << " $ \n";
        break;
        case 2: cout << "Deposit amount";
            double depositAmount;
            cin >> depositAmount;
            balance += depositAmount;
            break;

        case 3: cout << "Withdraw amount";
            double withdrawAmount;
            cin >> withdrawAmount;
            if (withdrawAmount <= balance)
                balance -= withdrawAmount;
            else
                cout << "Not Enough Balance in your account";
            break;
        }
    } while (option != 4);

    system("pause>0");
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
