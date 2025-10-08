#include <iostream>
#include <climits>
using namespace std;

int getMax(int num[], int n) {
    int maxVal = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (num[i] > maxVal) {
            maxVal = num[i];
        }
    }
    return maxVal;
}

int getMin(int num[], int n) {
    int minVal = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (num[i] < minVal) {
            minVal = num[i];
        }
    }
    return minVal;
}

int main() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;

    int num[100];
    cout << "Enter " << size << " elements: ";

    for (int i = 0; i < size; i++) {
        cin >> num[i];
    }

    cout << "Maximum value is " << getMax(num, size) << endl;
    cout << "Minimum value is " << getMin(num, size) << endl;

    return 0;
}
