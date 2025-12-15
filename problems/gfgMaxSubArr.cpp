#include <iostream>
#include <vector>
#include <climits>
using namespace std;

class Solution {
public:
    int maxSubarraySum(vector<int> &arr, int k) {
        int i = 0, j = 0;
        int sum = 0;
        int maxSum = INT_MIN;

        while (j < arr.size()) {
            sum += arr[j];

            if (j - i + 1 < k) {
                j++;
            } else {
                maxSum = max(maxSum, sum);
                sum -= arr[i];
                i++;
                j++;
            }
        }
        return maxSum;
    }
};

int main() {
    Solution obj;

    vector<int> arr1 = {100, 200, 300, 400};
    int k1 = 2;
  cout<<"**********************************************";
    cout << "Output: " << obj.maxSubarraySum(arr1, k1) << endl;
     

    return 0;
}
