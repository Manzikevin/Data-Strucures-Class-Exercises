#include <iostream>
using namespace std;

int main() {
    int size;

    // 1. Ask the user for the array size
    cout << "Enter the number of elements: ";
    cin >> size;

    // Validate that size is greater than 0
    if (size <= 0) {
        cout << "Invalid size!" << endl;
        return 1;
    }

    // 2. Dynamically allocate memory for the array
    int* arr = new int[size];

    // 3. Accept numbers from the user
    cout << "Enter " << size << " numbers:\n";
    for (int i = 0; i < size; i++) {
        cout << "Number " << i + 1 << ": ";
        cin >> arr[i];
    }

    // 4. Display the array
    cout << "\nYou entered: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 5. Find maximum and minimum
    int maxVal = arr[0];
    int minVal = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }

    // 6. Display results
    cout << "Maximum number: " << maxVal << endl;
    cout << "Minimum number: " << minVal << endl;

    // 7. Free the dynamically allocated memory to prevent memory leaks
    delete[] arr;

    return 0;
}