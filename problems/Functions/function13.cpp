#include <iostream>
using namespace std;

int  unique_elmt(int arr[], int size) {
  cout << "Function 'unique_elmt' is running\n";
  int idx = 0;
  for (int i = 0; i < size; i++) {

    int count = 0;
    for (int j = 0; j < size; j++) {

      if (arr[i] == arr[j]) {
        count++;
      }
    }
    
    idx++;
  }
  int temparr[size];

    temparr[idx] = count;
}
bool unique_occurence(int temparr[], int size) {
  cout << "Function 'unique_occurence' is running\n";

  for (int k = 0; k < size; k++) {

    int count = 0;
    for (int l = 0; l < size; l++) {

      if (temparr[k] == temparr[l]) {
        count++;
      }
    }
    if (count > 0) {
      return false;
    } else {
      return true;
    }
  }
}

int main() {
  int arr[10] = {
      1, 1, 2, 2, 3, 4, 3, 5, 6, 5,
  };
  int size = sizeof(arr) / sizeof(int);
  unique_elmt(arr, size);
  return 0;
}