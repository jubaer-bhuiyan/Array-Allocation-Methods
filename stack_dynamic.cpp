#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter array size: ";  // Ask user to input size
    cin >> size;  // Store user input into 'size'
    int arr[size];  // Array allocated on the stack (if supported in C++11 or later)
    for (int i = 0; i < size; i++) {
        arr[i] = i;  // Assign values to the array based on the size
        cout << arr[i] << " ";  // Output the values of the array
    }
    return 0;
}
