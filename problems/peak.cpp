#include<iostream>
#include <vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
    int s = 0, e = arr.size() - 1;
            int mid = s + (e - s) / 2;

    while (s < e) {

        if (arr[mid] < arr[mid + 1]) {
            s = mid + 1;
        } else {
            e = mid;
        }
    mid=s+(e-s)/2;
    }

    return e;  
}

int main() {
    vector<int> arr = {0, 1, 2, 3, 2,1,0};

    int peak = peakIndexInMountainArray(arr);
    cout << "Peak Index: " << peak << endl;

    return 0;
}
