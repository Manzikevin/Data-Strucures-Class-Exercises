#include <iostream>

using namespace std;

// Function to calculate the sum of two numbers
double addNumbers(double num1, double num2) {
    return num1 + num2;
}

// Function to calculate the product of two numbers
double multiplyNumbers(double num1, double num2) {
    return num1 * num2;
}

int main() {
    double num1, num2;

    // Get input from the user
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Call the functions to compute the results
    double sumResult = addNumbers(num1, num2);
    double productResult = multiplyNumbers(num1, num2);

    // Display the results
    cout << "\n--- Results ---" << endl;
    cout << "Sum (" << num1 << " + " << num2 << ") = " << sumResult << endl;
    cout << "Product (" << num1 << " * " << num2 << ") = " << productResult << endl;

    return 0;
}