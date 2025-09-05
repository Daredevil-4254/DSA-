#include <iostream>

using namespace std;
// bool tofind(int arr[][4], int key) {
//   for (int i = 0; i < 3; i++) {
//     for (int j = 0; j < 4; j++) {
//       if (arr[i][j] == key) {
//         return 1;
//       } 
//     }
//   }
//   return 0;
// }
int main() {
  int arr[3][4];
  cout <<" Enter the values :"<<endl;
    for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      cin >> arr[i][j];
    }
  }
  cout << "Enter the key to find : ";
  int key;
  cin >> key;
//  tofind(arr, key)?cout<<"Present ":cout<<"Not present";
  
  // printing the array
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }
}