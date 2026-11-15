
#include <iostream>
#include <memory>
using namespace std;

class Widget {
    int id;
    static int count;

public:
    Widget() {
        id = ++count;
        cout << "Created W" << id << endl;
    }

    ~Widget() {
        cout << "Destroyed W" << id << endl;
        --count;
    }

    static int alive() {
        return count;
    }
};

int Widget::count = 0;

int main() {
    unique_ptr<Widget> a = make_unique<Widget>();
    unique_ptr<Widget> b = make_unique<Widget>();

    cout << "Alive = " << Widget::alive() << endl;

    {
        unique_ptr<Widget> c = make_unique<Widget>();
        cout << "Alive = " << Widget::alive() << endl;
    }  

    cout << "Alive = " << Widget::alive() << endl;

    return 0;
}  
