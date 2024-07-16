#include <iostream>
#include <queue>
#include <stack>
using namespace std;

// Function to reverse the elements of a queue
void reverseQueue(queue<int>& q) {
    stack<int> s;

    // Transfer elements from queue to stack
    while (!q.empty()) {
        s.push(q.front());
        q.pop();
    }

    // Transfer elements back from stack to queue
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }
}

// Function to print the elements of a queue
void printQueue(queue<int> q) {
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {
    queue<int> q;
    int numberOfElements, element;

    // Prompt user for the number of elements
    cout << "Enter the number of elements: ";
    cin >> numberOfElements;

    // Prompt user for the elements of the queue
    cout << "Enter " << numberOfElements << " elements: ";
    for (int i = 0; i < numberOfElements; i++) {
        cin >> element;
        q.push(element);
    }

    // Display the original queue
    cout << "Original queue: ";
    printQueue(q);

    // Reverse the queue
    reverseQueue(q);

    // Display the reversed queue
    cout << "Reversed queue: ";
    printQueue(q);

    return 0;
}