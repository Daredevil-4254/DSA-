#include <climits>
#include <iostream>
using namespace std;

int maxi(int arr[], int size) {
    int max = INT_MIN;
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max; // Return after the loop
}

int mini(int arr[], int size) {
    int min = INT_MAX;
    for (int i = 0; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min; // Return after the loop
}

int main() {
    int arr[10] = {232, 45, 22323, 5, 43232,85028,983209,0,47017,3556};
    int size = sizeof(arr) / sizeof(int);

    int max = maxi(arr, size);
    int min = mini(arr, size);

    cout << "Maximum: " << max << endl;
    cout << "Minimum: " << min << endl;

    return 0;
}
