#include <iostream>
using namespace std;

int main() {
    cout << "Enter a number: ";
    int n;
    cin >> n;

    if (n < 2) {  // 0 and 1 are not prime
        cout << "Not a prime" << endl;
        return 0;
    }

    bool isPrime = true;  // Assume it's prime

    for (int i = 2; i * i <= n; i++) {  // Only check up to √n
        if (n % i == 0) {
            isPrime = false;  // Found a divisor
            break;  // No need to check further
        }
    }

    if (isPrime)
        cout << "Prime!!" << endl;
    else
        cout << "Not a prime" << endl;

    return 0;
}
