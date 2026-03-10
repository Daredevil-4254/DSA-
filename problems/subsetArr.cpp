#include<iostream>
#include <unordered_map>
using namespace std;
class Solution{
  public:
    bool isSubset(vector<int>&a, vector<int>&b){
      unordered_map<int, int>freqA;
      for(int i=0; i<a.size();i++){
        freqA[a[i]]++;
      }
      for(int i =0 ; i<b.size(); i++){
        if(freqA[b[i]]>0){
          freqA[b[i]]--;
        }else{
          return false;
        }
      }
      return true;
    }
};
int main (){
  vector<int>a={10, 5, 2, 23, 19};
  vector<int>b={19, 5, 3};
  Solution sol;

  cout << (sol.isSubset(a, b) ? "yes it's a Subset" : "Not a subset") << endl;
}