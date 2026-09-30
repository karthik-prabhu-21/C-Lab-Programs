#include <iostream>
using namespace std;

class Tracer {
private:
    int id;

public:
    Tracer(int i) {
        id = i;
        cout << "Tracer " << id << " created" << endl;
    }

    ~Tracer() {
        cout << "Tracer " << id << " destroyed" << endl;
    }
};

int main() {

    for (int i = 1; i <= 5; i++) {

        Tracer *t = new Tracer(i);

        delete t;
    }

    return 0;
}