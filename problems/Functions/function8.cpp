#include <iostream>
using namespace std;

int linear_search(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // Found the key, return its index
        }
    }
    return -1; // Not found
}

int main() {
    int oddArr[5] = {1, 2, 3, 4, 5};
    int evenArr[6] = {2, 4, 6, 8, 12, 14};

    int size = sizeof(oddArr) / sizeof(int);
    cout <<" Enter the element to search for " << endl; 
    int key;
    cin >> key;

    int searchIndex = linear_search(oddArr, size, key); // Try searching for 6

    if (searchIndex != -1) {
        cout << "Key found at index = " << searchIndex << endl;
    } else {
        cout << "Key not found" << endl;
    }

    return 0;
}
