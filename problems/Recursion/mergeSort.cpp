#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int s, int e) {
    // int mid = s + (e - s) / 2;

    // int len1 = mid - s + 1;
    // int len2 = e - mid;

    // // temporary arrays
    // int *first = new int[len1];
    // int *second = new int[len2];

    // // copy left part
    // for (int i = 0; i < len1; i++) {
    //     first[i] = arr[s + i];
    // }

    // // copy right part
    // for (int i = 0; i < len2; i++) {
    //     second[i] = arr[mid + 1 + i];
    // }

    // // merge two sorted halves
    // int index1 = 0, index2 = 0;
    // int mainIndex = s;

    // while (index1 < len1 && index2 < len2) {
    //     if (first[index1] <= second[index2]) {
    //         arr[mainIndex++] = first[index1++];
    //     } else {
    //         arr[mainIndex++] = second[index2++];
    //     }
    // }

    // while (index1 < len1) {
    //     arr[mainIndex++] = first[index1++];
    // }
    // while (index2 < len2) {
    //     arr[mainIndex++] = second[index2++];
    // }

    // delete[] first;
    // delete[] second;
    
}

void mergeSort(vector<int> &arr, int s, int e) {
    if (s >= e) return; // base case

    int mid = s + (e - s) / 2;

    // recursive calls
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);

    // merge two halves
    merge(arr, s, e);
}

// Driver Function
int main() {
    vector<int> arr = {38, 27, 43, 3, 9, 82, 10};

    cout << "Original Array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    mergeSort(arr, 0, arr.size() - 1);

    cout << "Sorted Array: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    return 0;
}
