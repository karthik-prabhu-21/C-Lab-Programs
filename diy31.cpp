#include <iostream>
using namespace std;

template <typename T>
void swapVals(T& a, T& b) { T t = a; a = b; b = t; }

template <typename T>
T findMax(T arr[], int n) {
    T m = arr[0];
    for (int i = 1; i < n; i++) if (arr[i] > m) m = arr[i];
    return m;
}

int main() {
    int a = 1, b = 2; swapVals(a, b);
    double x = 1.5, y = 2.5; swapVals(x, y);
    cout << a << " " << b << " " << x << " " << y << "\n";

    int ia[] = {3, 9, 4};
    double da[] = {1.2, 0.5, 7.7};
    cout << findMax(ia, 3) << " " << findMax(da, 3) << "\n";
}