#include <iostream>
using namespace std;

class Counter {
private:
    static int totalCreated;
    static int alive;

public:
    Counter() {
        totalCreated++;
        alive++;
    }

    ~Counter() {
        alive--;
    }

    static void showCount() {
        cout << "Total objects ever created: " << totalCreated << endl;
        cout << "Currently alive: " << alive << endl;
    }
};

int Counter::totalCreated = 0;
int Counter::alive = 0;

int main() {
    Counter::showCount();

    Counter a;
    Counter b;

    Counter::showCount();

    {
        Counter c;
        Counter d;
        Counter::showCount();
    }

    Counter::showCount();

    Counter e;
    Counter::showCount();

    return 0;
}