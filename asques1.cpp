#include <iostream>
using namespace std;

#define MAX 5 // Defining maximum size of the stack

class Stack {
    int top;
    int a[MAX]; // Stack with maximum size of MAX

public:
    Stack() { top = -1; } // Constructor to initialize top
    bool push(int x);
    int pop();
    int peek();
    bool isEmpty();
    void display();
};

bool Stack::push(int x) {
    if (top >= (MAX - 1)) {
        cout << "Stack Overflow" << endl;
        return false;
    } else {
        a[++top] = x;
        cout << x << " pushed into stack\n";
        return true;
    }
}

int Stack::pop() {
    if (top < 0) {
        cout << "Stack Underflow" << endl;
        return 0;
    } else {
        int x = a[top--];
        return x;
    }
}

int Stack::peek() {
    if (top < 0) {
        cout << "Stack is Empty" << endl;
        return 0;
    } else {
        int x = a[top];
        return x;
    }
}

bool Stack::isEmpty() {
    return (top < 0);
}

void Stack::display() {
    if (top < 0) {
        cout << "Stack is empty" << endl;
        return;
    }
    cout << "Stack elements are: ";
    for (int i = top; i >= 0; i--)
        cout << a[i] << " ";
    cout << endl;
}

// Main program to demonstrate stack operations
int main() {
    Stack s;
    int value;
    cout << "Enter 5 values to push into the stack:" << endl;
    for(int i = 0; i < MAX; i++) {
        cout << "Enter value " << i+1 << ": ";
        cin >> value;
        s.push(value);
    }

    // Displaying stack elements
    s.display();

    return 0;
}