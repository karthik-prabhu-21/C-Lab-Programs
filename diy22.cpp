#include <iostream>
using namespace std;

class Account {
protected:
    double balance;

public:
    Account(double b) {
        balance = b;
    }

    virtual double calculateInterest() = 0;

    virtual ~Account() {}
};

class Savings : public Account {
public:
    Savings(double b) : Account(b) {}

    double calculateInterest() override {
        return balance * 0.06;
    }
};

class Current : public Account {
public:
    Current(double b) : Account(b) {}

    double calculateInterest() override {
        return balance * 0.02;
    }
};

int main() {
    Savings s(10000);
    Current c(20000);

    Account* accounts[2] = {&s, &c};

    for (int i = 0; i < 2; i++) {
        cout << "Interest: "
             << accounts[i]->calculateInterest()
             << endl;
    }

    return 0;
}