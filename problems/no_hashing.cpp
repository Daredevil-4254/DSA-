#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size;
    cout<<"Enter size :";
    cin >> size;

    vector<int> arr(size);
    for (int i = 0; i < size; i++) {
        cout<<"Enter array values :";
        cin >> arr[i];
    }

    // Precompute frequency using vector
    vector<int> hash(100, 0); // handles values from 0 to 99

    for (int i = 0; i < size; i++) {
        hash[arr[i]]++; // count frequency
    }

    // Fetch queries
    int q;
    cout<<"Enter no. of queries :";
    cin >> q;
    while (q--) {
        int number;
        cout<<"Enter the numbers :";
        
        cin >> number;

        if (number >= 0 && number < 100) {
            cout << "Number of times "<<number<<" has occured is :"<<hash[number] << endl;
        } else {
            cout << "Out of range!" << endl;
        }
    }

    return 0;
}
