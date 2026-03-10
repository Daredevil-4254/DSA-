#include <iostream>
#include <vector> 
using namespace std;

class Solution {
public:
    void rotateclockwise(vector<int>& arr, int k) {
        int n = arr.size();
        if (n == 0) return; 
        k = k % n;
        if (k == 0) return;

        for (int i = 0; i < k; i++) {
            int last = arr[n - 1]; 
            
            
            for (int j = n - 1; j > 0; j--) {
                arr[j] = arr[j - 1];
                // O(N^2)
            }
            
            arr[0] = last; 
        }
    }
};

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int k = 2;
    Solution sol;
    sol.rotateclockwise(arr, k);

    cout << "The final rotated array after " << k << " rotations is: ";
    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}