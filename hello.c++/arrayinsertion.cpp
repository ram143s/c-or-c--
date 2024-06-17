#include <iostream>
using namespace std;

void insertValue(int arr[], int size, int value, int position) {
    // Shifting elements to the right to make room for the new element
    for (int i = size; i >= position; i--) {
        arr[i] = arr[i - 1];
    }
    // Inserting the value at the given position
    arr[position - 1] = value;
}

int main() {
    int size = 5;
    int arr[size + 1]; // Create an array with an extra space for the new element

    // Initialize the array with some values
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;
    }

    int value = 10; // Value to be inserted
    int position = 3; // Position at which the value is to be inserted

    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Insert the value
    insertValue(arr, size, value, position);

    cout << "Array after insertion: ";
    for (int i = 0; i <= size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
