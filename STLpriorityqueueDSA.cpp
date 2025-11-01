#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    // Max heap (default)
    priority_queue<int> maxi;

    // Min heap
    priority_queue<int, vector<int>, greater<int>> mini;

    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(4);

    cout << "Max-Heap elements: ";
    while (!maxi.empty()) {
        cout << maxi.top() << " ";
        maxi.pop();
    }
    cout << endl;

    mini.push(1);
    mini.push(2);
    mini.push(3);
    mini.push(4);

    cout << "Min-Heap elements: ";
    while (!mini.empty()) {
        cout << mini.top() << " ";
        mini.pop();
    }
    cout << endl;

    return 0;
}
