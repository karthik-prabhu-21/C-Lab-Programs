//DIY3
//INLINE OVERLOADED

#include <iostream>
using namespace std;

inline int minVal(int a, int b)
{
    return (a < b) ? a : b;
}

inline int minVal(int a, int b, int c)
{
    return minVal(minVal(a, b), c);
}

int main()
{
    cout << "Smaller of two = " << minVal(10, 5) << endl;
    cout << "Smallest of three = " << minVal(10, 5, 3) << endl;

    return 0;
}