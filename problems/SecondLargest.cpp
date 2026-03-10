#include <climits>
#include <iostream>
using namespace std;

class Solution {
public:
  int getSecondLargest(vector<int> &arr) {
    int fLargest = INT_MIN;
    int sLargest = INT_MIN;

    for (int i = 0; i < arr.size(); i++) {

      if (arr[i] > fLargest) {
        sLargest = fLargest;
        fLargest = arr[i];        
      } else if (arr[i] > sLargest && arr[i] != fLargest) {
        sLargest = arr[i];
      }
    }
    return sLargest;

    if (sLargest == INT_MIN) {
      return -1;
    }
  }
};
int main(){
  vector<int>arr={10,10,10};
  Solution sol;
int finalAns=sol.getSecondLargest(arr);
cout<<"Second largest in the array ias :"<<finalAns<<endl;


}