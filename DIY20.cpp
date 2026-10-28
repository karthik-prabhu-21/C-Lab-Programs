#include <iostream>
using namespace std;

class Shape {
protected:
    string color;

public:
    Shape(string c) {
        color = c;
        cout << "Shape constructor called" << endl;
    }
};

class Polygon : public Shape {
protected:
    int sides;

public:
    Polygon(string c, int s) : Shape(c) {
        sides = s;
        cout << "Polygon constructor called" << endl;
    }
};

class Rectangle : public Polygon {
    double length, width;

public:
    Rectangle(string c, int s, double l, double w)
        : Polygon(c, s) {
        length = l;
        width = w;
        cout << "Rectangle constructor called" << endl;
    }

    void display() {
        cout << "Color: " << color << endl;
        cout << "Number of sides: " << sides << endl;
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
    }
};

int main() {
    Rectangle r("Blue", 4, 10, 5);
    cout << "\nRectangle Details:\n";
    r.display();

    return 0;
}