#include <iostream>
using namespace std;

class Overflow {};
class Underflow {};

class Stack {
    int a[3], top = -1;
public:
    void push(int x) {
        if (top == 2) throw Overflow();
        a[++top] = x;
    }
    int pop() {
        if (top == -1) throw Underflow();
        return a[top--];
    }
};

int main() {
    Stack s;
    try {
        s.pop();                         
    } catch (Underflow&) { cout << "Stack is empty!\n"; }

    try {
        for (int i = 0; i < 5; i++) s.push(i);  
    } catch (Overflow&) { cout << "Stack is full!\n"; }
}