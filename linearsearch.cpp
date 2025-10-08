#include<iostream>
using namespace std;

// The search function performs a linear scan.
// It returns true (1) if the key is found, and false (0) otherwise.
bool search(int arr[],int size,int key){
    for(int i=0; i < size; i++){
        if(arr[i] == key){
            return true; // Return immediately if key is found
        }
    }
    return false; // Return false after checking the entire array
}

int main(){

    int arr[10] = {5, 7, -2, 10, 12, 22, -4, 1, 6, 8};
    int size = 10; // Use a variable for size, though not strictly required here

    cout << "Enter the key: ";
    int key;
    cin >> key;

    // Call the search function
    bool found = search(arr, size, key);

    // Output the result
    if(found){
        cout << "Key is present" << endl;
    }
    else{
        // FIX: Changed "not pre" to the complete message
        cout << "Key is not present" << endl; 
    }

    return 0;
}