#include <iostream>
using namespace std;
int main (){

int row = 1;
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
while (row<=n)
{
   int col=1;//initialization col=1 is very important here.
   
    while (col<=row) {
        cout<<" * ";
        col+=1;
    
    }
cout<<endl;
cout<<endl;
row+=1;

}





}