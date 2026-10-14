#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

// Function Prototypes for 1D Array
void readArray(int arr[], int &size);
void displayArray(const int arr[], int size);
void addNewElementInArray(int arr[], int &size);
void deleteElement(int arr[], int &size);
void searchElementInArray(const int arr[], int size);
void sortArray(int arr[], int size);

int main()
{
    int arr[MAX_SIZE];
    int size = 0;

    cout << "=== 1D ARRAY: 1. Read Array ===" << endl;
    readArray(arr, size);

    cout << "\n=== 1D ARRAY: 2. Display Array ===" << endl;
    displayArray(arr, size);

    cout << "\n=== 1D ARRAY: 3. Insert Element ===" << endl;
    addNewElementInArray(arr, size);
    displayArray(arr, size);

    cout << "\n=== 1D ARRAY: 4. Delete Element ===" << endl;
    deleteElement(arr, size);
    displayArray(arr, size);

    cout << "\n=== 1D ARRAY: 5. Search Element ===" << endl;
    searchElementInArray(arr, size);

    cout << "\n=== 1D ARRAY: 6. Sort Array ===" << endl;
    sortArray(arr, size);
    displayArray(arr, size);

    return 0;
}

// 1. readArray()
void readArray(int arr[], int &size)
{
    cout << "Enter number of elements (max " << MAX_SIZE << "): ";
    cin >> size;

    if (size > MAX_SIZE || size < 0)
    {
        cout << "Invalid size! Setting size to 0." << endl;
        size = 0;
        return;
    }

    cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; i++)
    {
        cout << "Element [" << i << "]: ";
        cin >> arr[i];
    }
}

// 2. displayArray()
void displayArray(const int arr[], int size)
{
    if (size == 0)
    {
        cout << "The array is empty." << endl;
        return;
    }

    cout << "Array elements: { ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << (i == size - 1 ? "" : ", ");
    }
    cout << " }" << endl;
}

// 3. addNewElementInArray()
void addNewElementInArray(int arr[], int &size)
{
    if (size >= MAX_SIZE)
    {
        cout << "Array is full! Cannot insert." << endl;
        return;
    }

    int element, pos;
    cout << "Enter element to insert: ";
    cin >> element;
    cout << "Enter position index (0 to " << size << "): ";
    cin >> pos;

    if (pos < 0 || pos > size)
    {
        cout << "Invalid position!" << endl;
        return;
    }

    for (int i = size; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos] = element;
    size++;
    cout << "Element inserted successfully." << endl;
}

// 4. deleteElement()
void deleteElement(int arr[], int &size)
{
    if (size <= 0)
    {
        cout << "Array is empty! Cannot delete." << endl;
        return;
    }

    int pos;
    cout << "Enter position index to delete (0 to " << size - 1 << "): ";
    cin >> pos;

    if (pos < 0 || pos >= size)
    {
        cout << "Invalid position!" << endl;
        return;
    }

    for (int i = pos; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    size--;
    cout << "Element deleted successfully." << endl;
}

// 5. searchElementInArray()
void searchElementInArray(const int arr[], int size)
{
    if (size == 0)
    {
        cout << "Array is empty! Cannot search." << endl;
        return;
    }

    int target;
    cout << "Enter element to search for: ";
    cin >> target;

    bool found = false;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            cout << "Element " << target << " found at index " << i << "." << endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "Element " << target << " not found." << endl;
    }
}

// 6. sortArray()
void sortArray(int arr[], int size)
{
    if (size <= 1)
        return;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Array sorted in ascending order." << endl;
}