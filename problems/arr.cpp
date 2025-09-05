#include <iostream>
#include <vector>
using namespace std;

void findDuplicate(vector<int> &arr) {

  for (int i = 0; i < arr.size(); i++)
   {
    int count = 0;
    for (int j = 1; j < arr.size() ; j++) 
    {
      if (arr[j] == arr[i]) {
        count++;
      }
    }
    if (count == 2) {
      cout << arr[i] << " ";
      break;
    }
  }
}
int main() {

  vector<int> arr = {1, 2, 3, 4, 4};
  findDuplicate(arr);
}
