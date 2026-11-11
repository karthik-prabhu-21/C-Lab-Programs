#include <iostream>
using namespace std;

class InsufficientFunds {};

class BankAccount {
    double balance = 100;
public:
    void withdraw(double amt) {
        if (amt > balance) throw InsufficientFunds();
        balance -= amt;
    }
};

int main() {
    BankAccount acc;
    try {
        acc.withdraw(500);
    } catch (InsufficientFunds&) {
        cout << "Not enough money!\n";
    }
}