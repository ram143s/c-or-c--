// #include <iostream>
// using namespace std;

// void bubbleSort(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         // Last i elements are already in place
//         for (int j = 0; j < n - i - 1; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 // Swap arr[j] and arr[j + 1]
//                 int temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }
// }

// int main() {
//     int arr[10] = {64, 34, 25, 12, 22, 11, 90, 88, 76, 45}; // Example array with 10 elements
//     int n = sizeof(arr) / sizeof(arr[0]);

//     cout << "Original array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     bubbleSort(arr, n);

//     cout << "Sorted array: ";
//     for (int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
 #include <iostream>
 #include<cmath>
using namespace std;

// Function to calculate the area of a rectangle
float area(float length,float width) {
    return length * width;
}

// Function to calculate the area of a square
float area(float side) {
    return side * side;
}

// Function to calculate the area of a triangle
float area(float base, float height) {
    return 0.5 * base * height;
}

int main() {
    float length, width, side, base, height;

    // Calculate the area of a rectangle
    length = 10.0;
    width = 5.0;
    cout << "Area of rectangle: " << area(length, width) << endl;

    // Calculate the area of a square
    side = 4.0;
    cout << "Area of square: " << area(side) << endl;

    // Calculate the area of a triangle
    base = 6.0;
    height = 3.0;
    cout << "Area of triangle: " << area(base, height) << endl;

    return 0;
}
