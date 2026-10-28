#include <iostream>
using namespace std;

class Base {
public:
    virtual ~Base() {
        cout << "Base destructor called\n";
    }
};

class Derived : public Base {
    int* data;

public:
    Derived() {
        data = new int[100];
        cout << "Memory allocated\n";
    }

    ~Derived() override {
        delete[] data;
        cout << "Derived destructor called\n";
    }
};

int main() {
    Base* ptr = new Derived();

    delete ptr;
    return 0;
}