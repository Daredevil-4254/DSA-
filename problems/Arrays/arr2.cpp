#include <iostream>
#include<vector>
using namespace std;

vector<int> sol(vector<int> &arr1, int n, vector<int> &arr2, int m) {

  vector<int> ans;
  for (int i = 0; i < n; i++) {
    int element = arr1[i];
    for (int j = 1; j < m; j++) {
      if (arr2[j] > element) {
        break;
      }
      if (arr2[j] == element) {
        ans.push_back(element);
        arr2[j] = -1;
        break;
      }
    }
  }
  return ans;
}
int main(){
    vector<int>arr1={1,2,3,4,5};
    int n =arr1.size();
    vector<int>arr2={2,3,4,5};
    int m =arr2.size();
    vector<int>ans=sol(arr1,n,arr2,m);
    for(int k=0;k<ans.size();k++)
{
    cout<<ans[k]<<" ";
}
}