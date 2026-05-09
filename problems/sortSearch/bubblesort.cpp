#include <iostream>
#include <utility>
using namespace std;

void bubble(vector<int> &arr,int n) {
  for (int i = 1; i < n; i++) {
    for (int j = 0; j < n-i; j++) {
      if (arr[j] > arr[j+1])
        swap(arr[j], arr[j+1]);
    }
  }
}
int main(){
    vector<int>arr={1,4,99,8,3};
    int n=arr.size();
    bubble(arr,n);
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}