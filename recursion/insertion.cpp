#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& arr, int n) {
    if (n <= 1) return;

    // Sort first n-1 elements
    insertionSort(arr, n - 1);

    // Insert last element into correct position
    int last = arr[n - 1];
    int secLastIndex = n - 2;
    while (secLastIndex >= 0 && arr[secLastIndex] > last) {
        arr[secLastIndex + 1] = arr[secLastIndex];
        secLastIndex--;
    }
    arr[secLastIndex + 1] = last;
}




// Driver function
int main() {
    vector<int> arr = {5, 3, 4, 1, 2};
    int n = arr.size();

    cout << "Original array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    insertionSort(arr, n);

    cout << "Sorted array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}
