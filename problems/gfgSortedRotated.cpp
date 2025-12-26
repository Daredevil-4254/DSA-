// Given a sorted array arr[] containing distinct positive integers that has been rotated at some unknown pivot, and a value x. Your task is to count the number of elements in the array that are less than or equal to x.

// Examples:

// Input: arr[] = [4, 5, 8, 1, 3], x = 6
// Output: 4
// Explanation: 1, 3, 4 and 5 are less than 6, so the count of all elements less than 6 is 4.



#include<iostream>
using namespace std;

class Solution {
public:
    int countLessEqual(vector<int>& arr, int x) {
        int n = arr.size();

        // 1. Find index of minimum element (pivot)
        int low = 0, high = n - 1;
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (arr[mid] > arr[high])
                low = mid + 1;
            else
                high = mid;
        }
        int pivot = low;

        // 2. Count <= x in left sorted part
        int count = upper_bound(arr.begin(), arr.begin() + pivot, x) - arr.begin();

        // 3. Count <= x in right sorted part
        count += upper_bound(arr.begin() + pivot, arr.end(), x) - (arr.begin() + pivot);

        return count;
    }
};
