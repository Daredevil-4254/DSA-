#include <iostream>
#include <memory>
using namespace std;
void colWiseSum(int arr[][4]) {
  {

    for (int col = 0; col < 4; col++) {
      int sum = 0;
      for (int row = 0; row < 3; row++) {
        sum += arr[row][col];
      }
      cout << "sum : " << sum << endl;
    }
  }
}
  int main() {
    int arr[3][4];
    cout << " Enter the values :" << endl;
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 4; j++) {
        cin >> arr[i][j];
      }
    }
    colWiseSum(arr);
  }