#include <iostream>
using namespace std;

int set_bit(int a, int b) {
  int count = 0;
  while (a > 0 || b > 0) {
    if ((a & 1) == 1) {
      count += 1;
      a >>= 1;
    } else if ((b & 1) == 1) {
      count += 1;
      b >>= 1;
    }
  }
  return count;
}
int main(){



    int a,b; 
    cout<<"Enter a :";
    cin>>a;
    cout<<"Enter b :";
    cin>>b;
    int bitcount=set_bit(a,b);
    cout<<"The no. of set bits are :"<<bitcount<<endl;
    return 0;
}
