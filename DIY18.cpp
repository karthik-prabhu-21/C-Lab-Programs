#include <iostream>
using namespace std;

class Order {
    static int nextID;
    int orderID;

public:
    Order() {
        orderID = nextID++;
    }

    void display() {
        cout << "Order ID: " << orderID << endl;
    }
};

int Order::nextID = 1001;

int main() {
    Order o1, o2, o3;

    o1.display();
    o2.display();
    o3.display();

    return 0;
}