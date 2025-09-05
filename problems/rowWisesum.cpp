#include <climits>
#include <iostream>
#include <memory>
using namespace std;
void rowWiseSum(int arr[][4]) {
   
    vector<int>maxim;
  for (int row = 0; row < 3; row++) {
    int sum = 0;
    for (int col = 0; col < 4; col++) {
      sum += arr[row][col];
    }
   
    maxim.push_back(sum);
}
//to find maximum row sum :
 int maxi=INT_MIN;
for(int i =0; i<maxim.size(); i++){
    if (maxim[i]>maxi) {
        maxi=maxim[i];
    }
}
cout<<"largest row sum :  "<<maxi<<endl;
}

int main() {
  int arr[3][4];
  cout << " Enter the values :" << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      cin >> arr[i][j];
    }
  }
  rowWiseSum(arr);
}