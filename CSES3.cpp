#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int len=1,maxLen=1;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]){
            len++;
            maxLen=max(maxLen,len);
        }
        else{
            len=1;
        }
    }
    cout<<maxLen<<endl;
    
    return 0;
}