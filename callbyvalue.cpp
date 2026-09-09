#include<iostream>
using namespace std;

int add(int x, int y)
{
 return x + y;
}

int main ()
{
  int a, b;

  cout << "Enter two numbers: ";
    cin >> a >> b;

    int sum = add(a,b);
    cout << "Sum: " << sum << endl;

    return 0;
}
