//DIY1
//OVERLOADED VOLUME

#include <iostream>
using namespace std;

// Cube
double volume(double side)
{
    return side * side * side;
}

// Cuboid
double volume(double length, double width, double height)
{
    return length * width * height;
}

// Cylinder
double volume(double radius, double height)
{
    return 3.14159 * radius * radius * height;
}

int main()
{
    cout << "Cube volume = " << volume(5) << endl;
    cout << "Cuboid volume = " << volume(4, 5, 6) << endl;
    cout << "Cylinder volume = " << volume(3, 7, 'c') << endl;

    return 0;
}