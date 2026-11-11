#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Queue {
    struct Node { T val; Node* next; };
    Node *head = nullptr, *tail = nullptr;
public:
    void enqueue(T v) {
        Node* n = new Node{v, nullptr};
        if (tail) tail->next = n; else head = n;
        tail = n;
    }
    void dequeue() {
        if (!head) return;
        Node* t = head; head = head->next;
        if (!head) tail = nullptr;
        delete t;
    }
    T front() { return head->val; }
    bool empty() { return head == nullptr; }
    ~Queue() { while (head) dequeue(); }
};

int main() {
    Queue<string> q;
    q.enqueue("one"); q.enqueue("two"); q.enqueue("three");
    while (!q.empty()) { cout << q.front() << " "; q.dequeue(); }
    cout << "\n";
}