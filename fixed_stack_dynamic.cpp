#include <iostream>
using namespace std;

int main() {
    // Fixed size array allocated on stack at compile time
    int arr[5] = {1, 2, 3, 4, 5};  // Array size is fixed and known at compile time
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";  // Output the array values
    }
    return 0;
}
