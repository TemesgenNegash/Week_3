// Assignment_8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount() {
        balance = 0.0;
    }

    void deposit(double amount) {
        balance += amount;
        saveTransaction("Deposit", amount);
    }

    void makePurchase(string item, double cost) {
        if (cost > balance) {
            cout << "Error, insufficient funds for " << item << endl;
        }
        else {
            balance -= cost;
            saveTransaction("Purchase - " + item, cost);
        }
    }

    void displayBalance() {
        cout << "Current Balance: $" << balance << endl;
    }

    void saveTransaction(string type, double amount) {
        ofstream file("transactions.txt", ios::app);
        if (file.is_open()) {
            file << type << ": $" << amount << endl;
            file.close();
        }
    }
};

int main() {
    BankAccount myAccount;

    myAccount.deposit(100.00);
    myAccount.makePurchase("Coffee/ Tea", 4.50);
    myAccount.makePurchase("Books", 25.00);
    myAccount.displayBalance();

    return 0;
}
/*Current Balance: $70.5

C:\CIS-25\Assignment_8\x64\Debug\Assignment_8.exe (process 14216) exited with code 0 (0x0).
Press any key to close this window . . .
*/


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
