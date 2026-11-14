#include <iostream>
using namespace std; // This lets us use cout and endl directly

int main() {
    // 1. Creating a basic array with 5 numbers
    int numbers[5] = {10, 20, 30, 40, 50};
    int size = 5;

    // 2. Printing the array
    cout << "Original Array: ";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // 3. Updating an element (Changing 30 to 99 at index 2)
    numbers[2] = 99; 
    cout << "After Update:   ";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    // 4. Searching for a number
    int target = 40;
    int foundIndex = -1; // -1 means not found yet

    for (int i = 0; i < size; i++) {
        if (numbers[i] == target) {
            foundIndex = i; // Store the index position
            break;          // Exit the loop early
        }
    }

    // Showing the search results
    if (foundIndex != -1) {
        cout << "Number " << target << " found at position: " << foundIndex << endl;
    } else {
        cout << "Number " << target << " not found." << endl;
    }

    return 0;
}
