#include <iostream>
using namespace std;

void swapReference(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;

    cout << "Before swapping: " << x << " " << y << endl;

    swapReference(x, y);

    cout << "After swapping: " << x << " " << y << endl;

    return 0;
}