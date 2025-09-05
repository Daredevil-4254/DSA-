#include<iostream>
#include<vector>
using namespace std;
char maxOccChar(string&s){
    vector<int>arr(26,0);
    //frequency count of each s[i]th character;
    for(int i=0;i<s.length();i++){
            
            for(int j=i+1;j<s.length();j++){
                if(s[i]==s[j]){
                    arr[s[i]-'a']++;
                }
            }
        }
    //finding the max freq.
    int maxfreq=-1;
    int maxindex=0;
    for(int i=0;i<26;i++){
       if(arr[i]>maxfreq){
        maxfreq=arr[i];
        maxindex=i;
    }
        
    }
    return 'a' + maxindex;
}
int main(){
    string s;
    cin>>s;
    char finalans=maxOccChar(s);

    cout<<"The Max Occuring Character is : "<<finalans<<endl;
}