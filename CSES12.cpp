// Palindrome Reorder
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin>>s;
    unordered_map<char,int> mp;
    for(int i=0;i<s.size();i++) mp[s[i]]++;
    int oddCnt=0;
    char ch;
    for(auto i:mp){
        if(i.second&1){
            oddCnt++;
            ch=i.first;
        }
    }
    if(oddCnt>1){
        cout<<"NO SOLUTION"<<endl;
    }
    else{
        string ans="";
        for(auto i:mp){
            for(int j=0;j<i.second/2;j++) ans+=i.first;
        }
        cout<<ans;
        if(s.size()&1) cout<<ch;
        reverse(ans.begin(),ans.end());
        cout<<ans;
    }
    
    return 0;
}
