#include<iostream>
using namespace std;
int missingNumber(vector<int>&nums){
    int n=nums.size()-1;
    int xorAll=0;
    if(n%4==0){xorAll=n;}
    if(n%4==1){xorAll=1;}
    if(n%4==2){xorAll=n+1;}
    if(n%4==3){xorAll=0;}
        int xorNums=0;
    for(int i =0; i<n; i++){
    xorNums^=nums[i];
    }
    int ans=xorNums^xorAll;
    return ans;
}

int main (){
    vector<int>nums={0,1,3,2,5};
    int ans=missingNumber( nums);
    cout<<"the missing vale in the range 0 to "<<nums.size()-1<<" is:"<<ans<<endl;
}