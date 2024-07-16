#include <iostream>
using namespace std;

// Function to calculate factorial using recursion
int factorial(int number) {
    if (number <= 1) // Base case: factorial of 0 or 1 is 1
        return 1;
    else
        return number * factorial(number - 1); // Recursive case
}

int main() {
    int inputNumber;

    // Prompt user for input
    cout << "Enter a number (below 10) to calculate its factorial: ";
    cin >> inputNumber;

    // Check if the input is valid
    if (inputNumber < 0 || inputNumber >= 10) {
        cout << "Invalid input! Please enter a number between 0 and 9." << endl;
        return 1; // Exit the program with an error code
    }

    // Calculate factorial
    int result = factorial(inputNumber);

    // Display the result
    cout << "The factorial of " << inputNumber << " is " << result << endl;

    return 0; // Exit the program successfully
}