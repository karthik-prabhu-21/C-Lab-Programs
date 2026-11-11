#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    unordered_map<string, int> freq;
    string w, best; int mx = 0;

    while (cin >> w) freq[w]++;

    for (auto& p : freq) {
        cout << p.first << ": " << p.second << "\n";
        if (p.second > mx) { mx = p.second; best = p.first; }
    }
    cout << "Most frequent: " << best << "\n";
}