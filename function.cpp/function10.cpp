#include<iostream>
#include <utility>
using namespace std;

void reverse(int arr[],int size){
    for (int i = 0; i < size / 2; i++) {

        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}
void printArray(int arr[],int size){
    for (int i = 0;i<size;i++){
        cout <<arr[i]<<" ";
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(int);
    reverse(arr,size);
    printArray(arr,size);
}