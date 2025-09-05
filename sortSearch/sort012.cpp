#include <iostream>
#include <vector>
using namespace std;
vector<int> sort012(vector<int> &arr) {
  vector<int> zeros;
  vector<int> ones;
  vector<int> twos;

  for (int i = 0; i < arr.size(); i++) {
    if (arr[i] == 0) {
      zeros.push_back(arr[i]);

    } else if (arr[i] == 1) {
      ones.push_back(arr[i]);

    } else {
      twos.push_back(arr[i]);
    }
  }
  vector<int> temp;
  for (int i = 0; i < zeros.size(); i++) {
    temp.push_back(zeros[i]);
  }
  for (int i = 0; i < ones.size(); i++) {
    temp.push_back(ones[i]);
  }
  for (int i = 0; i < twos.size(); i++) {
    temp.push_back(twos[i]);
  }

  return temp;
}
int main() {
  vector<int> arr = {
      1, 2, 2, 0, 0, 0, 1, 1, 2, 2,1,};
      vector<int>ans=sort012(arr);
      for (int i=0 ;i<ans.size(); i++) 
      {
        cout<<ans[i]<<" ";
      
      }
  
return 0;
    }