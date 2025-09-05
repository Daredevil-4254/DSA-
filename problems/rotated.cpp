#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void rotate(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n;  // Handle cases when k > n

    vector<int> temp;

    // Step 1: Copy last k elements
    for (int i = n - k; i < n; i++) {
        temp.push_back(arr[i]);
    }

    // Step 2: Copy first n - k elements
    for (int i = 0; i < n - k; i++) {
        temp.push_back(arr[i]);
    }

    // Step 3: Copy back to original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    rotate(arr, k);

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout<<endl;
}
