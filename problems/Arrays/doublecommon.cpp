#include <iostream>
using namespace std ;
void raju(int arr[],int size){
 for (int i = 0 ;i <size ; i++){

    int count =0;

for (int j =0; j< size;j++ ) {
    if (arr[i]==arr[j]){
count++;
    }


}
if (count==1) {
    cout<<arr[i]<<" ";

}
}




}
int main(){

    int arr[12]={1,1,4,2,6,5,2,6,3,4,69,5};
    int size=12;
     
    raju(arr,size );




}