#include<iostream>
using namespace std;
string removeAllOcc(string&s,string&part){
while (s.length()!=0 && s.find(part)<=s.length()){
    s.erase(s.find(part),part.length());

}
  return s;
    
    }

int main(){
    string s="daabcbaabcbc";
    string part="abc";
    string finalans=removeAllOcc(s,part);
    cout<<"final ans : "<<finalans<<endl;
}