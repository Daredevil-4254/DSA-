#include<iostream>
#include <utility>

using namespace std;

class Solution{
  public:
        void segregate0and1(vector<int> &arr) {
          int i=0;
          int j =arr.size()-1;
          while(i<j){
            if(arr[i]==0){
              i++;
          
            }
            else if(arr[j]==1){
                j--;
            } else {
                swap(arr[i], arr[j]);
                i++;
                j--;
            }
        }
            }
          
        

};
int main (){
  vector<int>arr={0,1,1,0,0,1,1,1,1,0,0,1,0};
  Solution func1;
  func1.segregate0and1(arr);
  for(int i :arr){
    cout<<i<<","<<" ";
  }
  cout<<endl;

}