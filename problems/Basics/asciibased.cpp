#include <iostream>

using namespace std;

int main() {
  
  
int input = cin.get();
  
  
  if (input >= 65 && input <= 90) {
    cout << "the entered value is a capital letter !";
  }
   else if (input >= 48 && input <= 57) {
    cout << "the entered value is a number from 0 to 9 !";

  }
  
   else if (input >= 97 && input <= 122) {
    cout << "yhe entered value is a small letter !";
  } 
  else {
    cout << "the entered value is neither a capital letter or small letter nor "
            "a number !!";
  }

  return 0;
}