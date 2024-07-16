#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50}; // Declaring and initializing an array
    int arrSize = sizeof(arr)/sizeof(arr[0]); // Calculating the size of the array

    cout << "Accessing elements in the array:" << endl;
    for(int i = 0; i < arrSize; i++) {
        cout << "Element at index " << i << ": " << arr[i] << endl; // Accessing each element using its index
    }

    return 0;
}