#include <algorithm>
#include<iostream>
using namespace std;


int longestMountain(int *arr, int n)
{
    // Write your code here.
    if(n<3)return 0;

  int longest =0,i=1;
  while(i<n-1){

    if(arr[i]>arr[i-1] && arr[i]>arr[i+1] ){
      int left =i-1;
      int right =i+1;

      while (left >0 && arr[left]>arr[left-1]  ) {
        left --;
      }
      while (arr[right]>arr[right+1] && right <n-1) {
        right ++;
      }

      longest=max(longest,right-left+1);
      i=right;

    }
    else{
      i++;
    }
  }
return longest ;
}
int main (){


  int arr[6]={1 ,3, 1, 4, 3, 1};
  int n=6;
  int finalAns=longestMountain(arr,  n);
  cout<<"Final Answer is : "<<finalAns<<endl;
}
