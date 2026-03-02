#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
  int firstNonRepeating(vector<int> &arr) {
    unordered_map<int, int> freq;
    for (int i = 0; i < arr.size(); i++) {
      freq[arr[i]]++;
    }
    for (int i = 0; i < arr.size(); i++) {
      if (freq[arr[i]] == 1) {
        return arr[i];
      }
    }
    return 0;
  }
};


int main() {
  vector<int> arr = {-1, 2, -1, 3, 2};
  Solution sol;
  int finalAns = sol.firstNonRepeating(arr);
  cout << "First non repeating element is :" << finalAns << endl;
}