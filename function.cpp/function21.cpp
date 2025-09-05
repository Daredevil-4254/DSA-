// You are given an integer array 'ARR' of size 'N' and an integer 'S'. Your
// task is to return the list of all pairs of elements such that each sum of
// elements of each pair equals 'S'. Note: Each pair should be sorted i.e the
// first value should be less than or equals to the second value.

// Return the list of pairs sorted in non-decreasing order of their first value.
// In case if two pairs have the same first value, the pair with a smaller
// second value should come first.

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

vector<pair<int, int>> pairSum(vector<int> &Arr, int N, int S) {
  vector<pair<int, int>> validPairs;

  // Sort the array first to ensure proper pairing
  sort(Arr.begin(), Arr.end());

  int i = 0, j = N - 1;

  // Use two pointers to fid the pairs
  while (i < j) {
    int sum = Arr[i] + Arr[j];
    if (sum == S) {
      // Add the pair in soted order
      validPairs.push_back({Arr[i], Arr[j]});
      i++;
      j--;
    } else if (sum < S) {
      i++; // Need a bigger sum, so move i forward
    } else {
      j--; // Need a smaller sum, so move j backward
    }
  }

  return validPairs;
}

int main() {
  int N = 5, S = 5;
  vector<int> Arr = {1, 2, 3, 4, 5};

  // Get the valid pairs
  vector<pair<int, int>> Ans = pairSum(Arr, N, S);

  // Print the valid pairs
  for (auto p : Ans) {
    cout << "(" << p.first << ", " << p.second
         << ") "; // Printing pairs in (x, y) format
  }

  return 0;
}
