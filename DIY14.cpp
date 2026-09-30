#include <iostream>
using namespace std;

class Stack {
private:
    int *arr;
    int capacity;
    int top;

public:
    Stack(int size) {
        capacity = size;
        arr = new int[capacity];
        top = -1;
    }

    void push(int value) {
        if (top == capacity - 1) {
            cout << "Stack Overflow" << endl;
            return;
        }

        arr[++top] = value;
    }

    int pop() {
        if (top == -1) {
            cout << "Stack Underflow" << endl;
            return -1;
        }

        return arr[top--];
    }

    ~Stack() {
        delete[] arr;
        cout << "Stack memory released." << endl;
    }
};

int main() {
    Stack s(5);

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Popped: " << s.pop() << endl;
    cout << "Popped: " << s.pop() << endl;

    return 0;
}