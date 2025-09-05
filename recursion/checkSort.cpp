#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> &arr, int index = 0) {
    int n = arr.size();
    if (n <= 1 || index == n - 1) return true; // base case
    if (arr[index] > arr[index + 1]) return false;
    return isSorted(arr, index + 1); // recursive check
}

int main() {
    vector<int> arr = {1, 3, 4};
    isSorted(arr) ? cout << "true" : cout << "false";
}
