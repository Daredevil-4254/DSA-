#include<iostream>
using namespace std;

int fact(int x) {
    if(x == 0) return 1;
    else {
        int m = 1;
        for (int i = 1; i <= x; i++) {
            m *= i;
        }
        return m;
    }
}

int combi(int n, int r) {
    int rfact = fact(r);
    int nfact = fact(n);
    int nrfact = fact(n - r);  

    int combination = nfact / (rfact * nrfact);  

    return combination;
}

int main () {
    int r, n;
    cout << "Enter the value of 'n' : ";
    cin >> n;
    cout << "Enter the value of 'r' : ";
    cin >> r;


    if (r > n) {
        cout << "Invalid input: r cannot be greater than n." << endl;
        return 1;
    }

    int answer = combi(n, r);
    cout << "nCr = " << answer << endl; 
    return 0;
}
