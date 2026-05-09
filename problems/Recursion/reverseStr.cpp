#include <iostream>
#include <utility>
using namespace std;

void revStr(string &str, int i, int j) {
    if (i >= j) return;   // base case

    swap(str[i], str[j]);
    i++;
    j--;
    revStr(str, i, j);
}

int main() {
    string str = "ankitsingh";
    revStr(str, 0, str.size() - 1);
    cout << str << endl;  
    return 0;
}
