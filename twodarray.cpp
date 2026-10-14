#include <iostream>

using namespace std;

int main() {
    // Initialize the 2D array with 3 rows and 5 columns
    int arr[4][5] = {
        {10, 20, 30, 40, 40},
        {60, 90, 30, 45, 46},
        {90, 13, 12, 15, 46},
        {90, 13, 12, 15, 46}
    };

    cout << "Displaying the 2D Array:" << endl;
    cout << "-------------------------" << endl;

    // Outer loop for rows
    for(int i = 0; i < 3; i++) {
        // Inner loop for columns
        for(int j = 0; j < 5; j++) {
            cout << arr[i][j] << "\t";
        }
        cout << endl; // New line after each row
    }

    return 0;
}