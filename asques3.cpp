#include <iostream>
using namespace std;

// Function to perform bubble sort on an array
void bubbleSort(int array[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                // Swap the elements
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

// Function to print the elements of an array
void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;

    // Prompt user for the size of the array
    cout << "Enter the size of the array: ";
    cin >> size;

    // Declare the array with the given size
    int array[size];

    // Prompt user for the elements of the array
    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }

    // Display the original array
    cout << "Original array: ";
    printArray(array, size);

    // Perform bubble sort
    bubbleSort(array, size);

    // Display the sorted array
    cout << "Sorted array: ";
    printArray(array, size);

    return 0;
}