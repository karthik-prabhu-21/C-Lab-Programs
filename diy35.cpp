#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    vector<pair<string, int>> v = {{"apple", 5}, {"banana", 2}, {"cherry", 8}, {"date", 1}};

    sort(v.begin(), v.end(), [](const auto& a, const auto& b) {
        return a.second < b.second;
    });

    for (const auto& [name, num] : v)
        cout << name << " " << num << "\n";
}