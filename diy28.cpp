#include <iostream>
#include <fstream>
#include <climits>
using namespace std;

int main() {
    ifstream in("nums.txt");
    int x, count = 0, sum = 0, mn = INT_MAX, mx = INT_MIN;
    while (in >> x) {
        count++;
        sum += x;
        if (x < mn) mn = x;
        if (x > mx) mx = x;
    }
    if (count == 0) { cout << "File is empty\n"; return 0; }
    cout << "Count: " << count << "\nSum: " << sum
         << "\nMin: " << mn << "\nMax: " << mx << endl;
}