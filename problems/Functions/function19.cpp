// Given an integer array nums of length n where all the integers of nums are in
// the range [1, n] and each integer appears at most twice, return an array of
// all the integers that appears twice.

// You must write an algorithm that runs in O(n) time and uses only constant
// auxiliary space, excluding the space needed to store the output

#include <cmath>

#include <iostream>
#include <vector>
using namespace std;

vector<int> findDuplicates(vector<int> &nums) {

  vector<int> ans;
  for (int i = 0; i < nums.size(); ++i) {
    int index = (abs(nums[i]) - 1);
    if (nums[index] < 0) { // if number found is neg => its already been marked
                           // =>its not unique
      ans.push_back(abs(nums[i])); // saving that not unique number in ans array

    } else {
      nums[index] = -nums[index]; // marking those uniquse numbers as negative
                                  // and letting me know its visited.
    }
  }

  return ans;
}
int main() {
  vector<int> arr = {4, 3, 2, 7, 8, 2, 3, 1};

  vector<int> finalans = findDuplicates(arr);

  cout << "Duplicate values are : ";
  for (int j = 0; j < finalans.size(); ++j) {
    cout << finalans[j] << " ";
  }
}