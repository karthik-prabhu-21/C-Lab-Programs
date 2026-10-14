#include <iostream>
using namespace std;

class Distance {
    int feet, inch;                  // private

public:
    void set(int f, int i) {         // give values to the object
        feet = f;
        inch = i;
    }
    void show() {                    // print the object
        cout << feet << "ft " << inch << "in\n";
    }
    friend Distance add(Distance a, Distance b);   // friend can use private data
};

Distance add(Distance a, Distance b) {
    Distance r;
    int total = (a.feet + b.feet) * 12 + a.inch + b.inch;   // everything in inches
    r.feet = total / 12;             // whole feet
    r.inch = total % 12;             // leftover inches
    return r;
}

int main() {
    Distance d1, d2, d3;
    d1.set(5, 8);
    d2.set(3, 7);

    d3 = add(d1, d2);
    d3.show();                       // 9ft 3in
    return 0;
}