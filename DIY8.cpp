//DIY8
//ANAGRAM TEST

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string s1, s2;

    cout << "Enter first word: ";
    cin >> s1;

    cout << "Enter second word: ";
    cin >> s2;

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if (s1 == s2)
        cout << "They are anagrams." << endl;
    else
        cout << "They are not anagrams." << endl;

    return 0;
}