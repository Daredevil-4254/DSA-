#include <algorithm>
#include<iostream>
using namespace std;


void rotate (vector<int>&arr,int k){
    vector<int>temp;
    int j =arr.size();
   
    while(j>=arr.size()-k+1){
        
        temp.push_back(arr[j--]);

    }
    int i=0;
    while(i<arr.size()-k+1){

        temp.push_back(arr[i++]);
    }
    for (int k = 0; k < arr.size(); k++) {
      arr[k] = temp[k];
    
    }
}
int main (){
    vector<int>arr={1,2,3,4,5,6,7};
    int k=3;
    rotate(arr,k);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}