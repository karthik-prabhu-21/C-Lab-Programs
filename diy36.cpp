#include <iostream>
#include <vector>
#include <queue>
#include <functional>
using namespace std;

int main() {
    int n, x;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;  // min-heap

    while (n--) {
        cin >> x;
        pq.push(x);
        if (pq.size() > 3) pq.pop();
    }

    vector<int> top;
    while (!pq.empty()) { top.push_back(pq.top()); pq.pop(); }

    for (int i = top.size() - 1; i >= 0; i--)  // largest first
        cout << top[i] << " ";
}