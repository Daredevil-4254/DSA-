#include <iostream>
#include <vector>
using namespace std;
bool searchArr(int arr[],int n ,int key){
    if(n<=0)return false;
    if(arr[0]==key)return 1;
    
    return searchArr(arr+1,n-1,key);
    
}
int main(){
    int arr[4]={1,4,6,9};
    int n=4;
    int key=0;
    searchArr(arr,n,key)?cout<<"True\n":cout<<"False\n";

}