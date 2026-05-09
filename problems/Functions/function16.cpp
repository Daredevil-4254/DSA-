#include <iostream>
using namespace std;

void nepal(int arr[], int size, int sum) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == sum) {
                // Print the pair in sorted order
                if (arr[i] < arr[j])
                    cout << arr[i] << " , " << arr[j] << endl;
                else
                    cout << arr[j] << " , " << arr[i] << endl;
            }
        }
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int sum = 5;

    nepal(arr, size, sum);
}
