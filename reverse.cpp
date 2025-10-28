#include <iostream>
using namespace std;

// Function to reverse an array in-place
// Parameters:
//   arr[] - input array to reverse
//   n     - number of elements in the array
void reverse(int arr[], int n) {
    int start = 0;        // Index at the beginning of the array
    int end = n - 1;      // Index at the end of the array

    // Swap elements from both ends moving towards the middle
    while (start <= end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    cout << endl; // Adds a newline (optional, not related to array reversal)
}

// Function to print the elements of an array
// Parameters:
//   arr[] - array to print
//   n     - number of elements in the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Print each element followed by a space
    }
    cout << endl; // Print a newline after the array
}

int main() {
    int arr[6] = {1, 4, 0, 5, -2, 15};  // Sample array of 6 integers
    int brr[5] = {2, 6, 3, 9, 4};       // Another sample array of 5 integers

    // Reverse both arrays in-place
    reverse(arr, 6);
    reverse(brr, 5);

    // Print the reversed arrays
    printArray(arr, 6);
    printArray(brr, 5);

    return 0; // End of program
}
