#include <iostream>

using namespace std;

// Function to read elements into the array
void readArray(int arr[], int size) {
    cout << "Enter " << size << " integers for the array:" << endl;
    for(int i = 0; i < size; i++) {
        cout << "Element " << (i + 1) << ": ";
        cin >> arr[i];
    }
}

// Function to display the array elements
void displayArray(int arr[], int size) {
    cout << "\n--- Array Contents ---" << endl;
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    const int SIZE = 5; // You can change this size as needed
    int myArray[SIZE];

    // Call the function to read input into the array
    readArray(myArray, SIZE);

    // Call the function to display the array
    displayArray(myArray, SIZE);

    return 0;
}