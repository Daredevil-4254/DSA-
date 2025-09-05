#include <iostream>
using namespace std;
bool isValid(vector<int> &arr, int mid, int m) {
  int maxAllowedPages = mid;

  int stuNo = 1;
  int pages = 0;
  int n = arr.size();
  for (int i = 0; i < n; i++) {
    if (arr[i] > maxAllowedPages)
      return false;
    if (pages + arr[i] <= maxAllowedPages) {
      pages += arr[i];
    } else {
      pages = arr[i];
      stuNo++;
    }
  }
  if (stuNo <= m) {
    return true;
  } else {
    return false;
  }
}

int findPages(vector<int> &arr, int n, int m) {

  int s = 0;
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }
  int e = sum;
  int mid = s + (e - s) / 2;
  int ans = 0;
  while (s <= e) {
    if (isValid(arr, mid, m)) {
      e = mid - 1;
      ans = mid;
    } else {
      s = mid + 1;
    }
    mid = s + (e - s) / 2;
  }
  return ans;
}

int main() {
    int T;
    cout<<"running"<<endl;
    cin >> T; // number of test cases
    while(T--) {
        int n, m;
        
        cin >> n >> m; // number of books, number of students
        vector<int> arr(n);
        for(int i = 0; i < n; i++) cin >> arr[i];

        cout << findPages(arr, n, m) << endl;
    }
    return 0;
}
