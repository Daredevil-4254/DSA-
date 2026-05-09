#include <climits>
#include <iostream>
using namespace std;

int maxi(int arr[], int size) {
  for (int i = 0; i < size; i++) {

    if (arr[i] > INT_MIN) {
        return arr[i];



    }
  }
}
int main (){
int arr[5], size;
int maximum=maxi(arr[],5);
cout<<maximum;
}