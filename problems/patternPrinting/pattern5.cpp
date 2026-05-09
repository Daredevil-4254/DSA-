// #include <iostream>
// using namespace std;

// int main() {

//   int i = 1;
//   int n;
//   cout << "enter no. of rows :";
//   cin >> n;
//   while (i <= n) {
//    int j;
   
//     int count = 1;

//     while (j <= n) {

//       cout << count << " ";
//       count += 1;

//       j += 1;
//     }
//     cout << endl;
//     i += 1;
//   }
// }
#include <iostream>
using namespace std;

int main() {
    int i = 1;
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
  int count = 1;// count has to be out of loops so that it can increment goblally
    while (i <= n) {
        int j = 1;  
      

        while (j <= n) {
            cout << count << " ";
            count += 1;
            j += 1;
        }
        cout << endl;
        i += 1;
    }

    return 0;
}
