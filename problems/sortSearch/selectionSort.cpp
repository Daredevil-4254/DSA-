#include <iostream>
#include <utility>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i <= n - 2; i++) {
        int minm = i;
        for (int j = i ; j <= n - 1; j++) {
            if (arr[j] < arr[minm]) {
                minm = j;
            }
        }
        swap(arr[i], arr[minm]);
    }
}
int main(){
    int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}