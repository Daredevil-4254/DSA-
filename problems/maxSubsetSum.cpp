#include<iostream>
using namespace std ;



int kSumSubset(vector<int> &arr, int k) 
{    
    int n = arr.size();
    int mid = n / 2;

    vector<long long> leftSum, rightSum;

    // Left half subsets
    for (int mask = 0; mask < (1 << mid); mask++) {
        long long sum = 0;
        for (int i = 0; i < mid; i++) {
            if (mask & (1 << i)) {
                sum += arr[i];
            }
        }
        if (sum <= k) {
            leftSum.push_back(sum);
        }
    }

    // Right half subsets
    for (int mask = 0; mask < (1 << (n - mid)); mask++) {
        long long sum = 0;
        for (int i = 0; i < n - mid; i++) {
            if (mask & (1 << i)) {
                sum += arr[mid + i];
            }
        }
        if (sum <= k) {
            rightSum.push_back(sum);
        }
    }

    sort(rightSum.begin(), rightSum.end());

    long long ans = 0;
    for (long long x : leftSum) {
        long long remaining = k - x;
        auto it = upper_bound(rightSum.begin(), rightSum.end(), remaining);
        if (it != rightSum.begin()) {
            --it;
            ans = max(ans, x + *it);
        }
    }

    return ans;
}
