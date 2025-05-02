#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter array size: ";  // Ask user to input size
    cin >> size;  // Store user input into 'size'
    int* arr = new int[size];  // Dynamically allocate memory for 'size' number of elements
    for (int i = 0; i < size; i++) {
        arr[i] = i + 1;  // Assign values to the array based on the size
        cout << arr[i] << " ";  // Output the values of the array
    }
    delete[] arr;  // Free the dynamically allocated memory to avoid memory leaks
    return 0;
}
