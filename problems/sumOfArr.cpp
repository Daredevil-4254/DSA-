#include <iostream>
#include<vector>
using namespace std;
int sum(vector<int>& arr, int n) {
    int value = 0;
    for (int i = 0; i < n; i++) {
        value = value * 10 + arr[i];
    }
    return value;
}

vector<int> findArraySum(vector<int>& a, int n, vector<int>& b, int m) {
    int sum1 = sum(a, n);
    int sum2 = sum(b, m);
    int totalSum = sum1 + sum2;

    vector<int> finalAns;

    // Edge case: if totalSum is 0
    if (totalSum == 0) {
        finalAns.push_back(0);
        return finalAns;
    }

    // Extract digits from totalSum (MSD to LSD)
    vector<int> temp;
    while (totalSum > 0) {
        temp.push_back(totalSum % 10);
        totalSum /= 10;
    }
    // Reverse to get correct order
    for (int i = temp.size() - 1; i >= 0; i--) {
        finalAns.push_back(temp[i]);
    }

    return finalAns;
}
int main(){
    vector<int>a={1,2,3};
    int n=a.size();
    vector<int>b={2,3,4};
    int m=b.size();
    vector<int>ans=findArraySum(a,  n,b, m);
    for(int i=0; i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}