#include <iostream>
#include<vector>
using namespace std;

int solution(vector<int> &arr) {
  // for (int i = 0; i < arr.size() ; i++) {
  //   int count = 0;
  //   for (int j = 0; j < arr.size(); j++) {
  //     if (arr[i] == arr[j]) {
  //       count++;
  //     }
  //   }
  //   if (count == 1) {
  //     cout << arr[i] << " ";
  //     break;
  //   }
  // }
  int ans=0;
  for (int i=0;i<arr.size();i++){//much more effecient solution
  
    ans=ans^arr[i];//a^a=0;a^0=a;
  }
  return ans;
}
int main() {
  vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 5, 5};
  int ans=solution(arr);
cout<<ans<<" ";
}
