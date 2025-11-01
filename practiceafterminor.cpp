#include <iostream>
using namespace std;

bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;

        }
    }
    return false;
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