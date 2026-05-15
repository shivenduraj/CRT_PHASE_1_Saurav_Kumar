#include <iostream>
using namespace std;

class Stack {
private:
    int arr[100];
    int topIndex;

public:
    Stack() {
        topIndex = -1;
    }

    void push(int val) {
        if (topIndex < 99) {
            topIndex++;
            arr[topIndex] = val;
        } else {
            cout << "Stack Overflow" << endl;
        }
    }

    void pop() {
        if (topIndex >= 0) {
            topIndex--;
        } else {
            cout << "Stack Underflow" << endl;
        }
    }

    int top() {
        if (topIndex >= 0) {
            return arr[topIndex];
        } else {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    int size() {
         if (topIndex >= 0) {
            return topIndex + 1;
        } else {
            cout << "Stack is empty" << endl;
            return 0;
        }
    }

    bool isEmpty() {
        if (topIndex <= -1) {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl;
    cout << "Stack size: " << s.size() << endl;

    s.pop();

    cout << "Top element after pop: " << s.top() << endl;
    cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}