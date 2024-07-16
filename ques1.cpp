#include<iostream>
#include<iomanip> // Include for std::fixed and std::setprecision
using namespace std;

int main() {
    int num1;
    float num2, sum;

    // Asking for input
    cout << "Enter an integer: ";
    cin >> num1;
    cout << "Enter a float: ";
    cin >> num2;

    // Adding numbers
    sum = num1 + num2;

    // Displaying the sum with fixed point notation and one decimal place
    cout << fixed << setprecision(1);
    cout << "The sum of " << num1 << " and " << num2 << " is " << sum << endl;

    return 0;
}