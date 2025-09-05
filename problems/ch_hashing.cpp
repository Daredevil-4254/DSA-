#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cout << "Enter the string :";
  cin >> s;
  // precomputation
  int hashh[26] = {0}; // this will work fine for hashh[256] also
  for (int i = 0; i < s.size(); i++) {
    hashh[s[i] - 'a']++; // if hashh[256]is used then -'a' term will be removed
  }
  // queries
  int q;
  cout << "Enter the number of queries :";
  cin >> q;
  // fetching the queries
  while (q--) {
    char c;
    cout << "Enter the letter that you want to search :";
    cin >> c;
    cout << "The char. " << c << " has appeared " << hashh[c - 'a']
         << " times." // to acess the index we use "character -'a'"
         << endl;
  } // if using hashh[256] ,we need not to write -'a '  term .
} // if the question dosent speak about the exclusivity of characters like all
  // small case or mixed then we need to take hashh[256]