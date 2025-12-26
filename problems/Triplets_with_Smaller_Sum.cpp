// Given an array arr[] of distinct integers of size n and a value sum, the task
// is to find the count of triplets (i, j, k), having (i<j<k) with the sum of
// (arr[i] + arr[j] + arr[k]) smaller than the given value sum.

// Examples :

// Input: n = 4, sum = 2, arr[] = {-2, 0, 1, 3}
// Output:  2
// Explanation: Below are triplets with sum less than 2 (-2, 0, 1) and (-2, 0,
// 3). Input: n = 5, sum = 12, arr[] = {5, 1, 3, 4, 7} Output: 4 Explanation:
// Below are triplets with sum less than 12 (1, 3, 4), (1, 3, 5), (1, 3, 7) and
// (1, 4, 5). Expected Time Complexity: O(N2). Expected Auxiliary Space: O(1).

// Constraints:
// 3 ≤ N ≤ 103
// -103 ≤ arr[i] ≤ 103
#include <iostream>
using namespace std;
class Solution {

public:
  long long countTriplets(int n, long long sum, long long arr[]) {
    // Your code goes here
    sort(arr, arr + n);
    long long count = 0;
    for (int i = 0; i < n - 2; i++) {
      int left = i + 1;
      int right = n - 1;

      while (left < right) {
        long long currSum = arr[i] + arr[left] + arr[right];
        if (currSum < sum) {

          count += (right - left);//jaan line of this code 
          left++;
        } else {
          right--;
        }
      }
    }
    return count;
  }
};