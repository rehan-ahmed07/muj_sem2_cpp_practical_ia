#include <iostream>
using namespace std;

// Definition of a node in the singly linked list
struct Node {
    int data;
    Node* next;
};

// Function to insert a new node at the beginning of the list
void insertAtBeginning(Node*& head, int newData) {
    // Create a new node
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = head;

    // Update the head to point to the new node
    head = newNode;
}

// Function to print the elements of the linked list
void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    int numberOfElements, element, newElement;

    // Prompt user for the number of elements
    cout << "Enter the number of elements: ";
    cin >> numberOfElements;

    // Prompt user for the elements of the linked list
    cout << "Enter " << numberOfElements << " elements: ";
    for (int i = 0; i < numberOfElements; i++) {
        cin >> element;
        insertAtBeginning(head, element);
    }

    // Display the original list
    cout << "Original list: ";
    printList(head);

    // Prompt user for the new element to be inserted at the beginning
    cout << "Enter the new element to be inserted at the beginning: ";
    cin >> newElement;

    // Insert the new node at the beginning
    insertAtBeginning(head, newElement);

    // Display the updated list
    cout << "Updated list: ";
    printList(head);

    return 0;
}