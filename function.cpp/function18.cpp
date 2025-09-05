// Problem statement
// You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and
// ‘N’ - 1 at least once.
//  There is a single integer value that is present in the array twice.
//  Your task is to find the duplicate integer value present in the array.
// For example:
// Consider ARR = [1, 2, 3, 4, 4], the duplicate integer value present in the
// array is 4. Hence, the answer is 4 in this case.

#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int> &arr) {

    int ans =0;
    for (int i=0;i< arr.size();i++) {
    ans=ans^arr[i];
    }
    for(int j=1;j<arr.size();j++){
        ans=ans^j;
    }

return ans;
}

int main() {

    vector<int>arr={6,5,4,3,2,1,3};
    int finalans = findDuplicate(arr); 
    cout << "Duplicate element: " << finalans << endl; 
    return 0;
}