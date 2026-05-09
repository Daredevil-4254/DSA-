#include<iostream>
using namespace std ;


int pivot(vector<int>&arr){
    int s=0,e=arr.size()-1;
    int mid=s+(e-s)/2;
    while (s<e) 
    {
        if (arr[mid]>arr[s]) 
        {
            s=mid+1;
        
        }
        else
        
         {
        e=mid;
        }
     mid=s+(e-s)/2;
    }
    return e;
}
int main(){
    vector<int>arr={3,7,9,1,2};
    int ans =pivot(arr);
    cout<<"Pivot is at index : "<<ans<<endl;
}