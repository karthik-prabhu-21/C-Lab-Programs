
#include <iostream>
#include <memory>
#include <string>
#include <vector>
using namespace std;

struct Shape {
    virtual double area() const = 0;
    virtual ~Shape() {}
};

struct Circle : Shape {
    double r;

    Circle(double r) : r(r) {}

    double area() const override {
        return 3.14159 * r * r;
    }
};

struct Square : Shape {
    double s;

    Square(double s) : s(s) {}

    double area() const override {
        return s * s;
    }
};

struct Triangle : Shape {
    double base, height;

    Triangle(double b, double h) : base(b), height(h) {}

    double area() const override {
        return 0.5 * base * height;
    }
};

unique_ptr<Shape> makeShape(const string& kind) {

    if (kind == "circle") {
        double r;
        cout << "Enter radius: ";
        cin >> r;

        return make_unique<Circle>(r);
    }

    else if (kind == "square") {
        double s;
        cout << "Enter side: ";
        cin >> s;

        return make_unique<Square>(s);
    }

    else if (kind == "triangle") {
        double b, h;
        cout << "Enter base and height: ";
        cin >> b >> h;

        return make_unique<Triangle>(b, h);
    }

    else {
        cout << "Invalid shape name!" << endl;
        return nullptr;
    }
}

int main() {

    vector<unique_ptr<Shape>> shapes;

    int n;
    cout << "How many shapes do you want to create? ";
    cin >> n;

    for (int i = 0; i < n; i++) {

        string kind;

        cout << "\nEnter shape name (circle/square/triangle): ";
        cin >> kind;

        auto shape = makeShape(kind);

        if (shape != nullptr) {
            shapes.push_back(move(shape));
        }
    }

    cout << "\n----- SHAPE DETAILS -----\n";

    for (size_t i = 0; i < shapes.size(); i++) {
        cout << "Shape " << i + 1
             << " Area = " << shapes[i]->area() << endl;
    }

    cout << "\nTotal shapes created: " << shapes.size() << endl;

    return 0;
}
