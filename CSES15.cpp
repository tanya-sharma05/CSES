// Creating Strings
// Permutations of String
#include<bits/stdc++.h>
using namespace std;

set<string> st;
void solve(int i,string s,int n){
    if(i==n) return;
    st.insert(s);
    for(int j=0;j<n;j++){
        swap(s[i],s[j]);
        solve(i+1,s,n);
        swap(s[i],s[j]);
    }
}

int main(){
    string s;
    cin>>s;
    solve(0,s,s.size());
    cout<<st.size()<<endl;
    for(auto i:st){
        cout<<i<<endl;
    }
    
    return 0;
}
