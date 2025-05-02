#include <iostream>
using namespace std;

int main() {
    // Heap allocation with fixed size (allocating memory dynamically)
    int* arr = new int[5];  // 'new' allocates memory on the heap for 5 integers
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;  // Assign values to the array
        cout << arr[i] << " ";  // Output the values of the array
    }
    delete[] arr;  // Free the memory after use to avoid memory leaks
    return 0;
}
