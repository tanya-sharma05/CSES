// Gray Code
#include<bits/stdc++.h>
using namespace std;

vector<string> solve(int n){
    if(n==1) return {"0","1"};
    
    vector<string> prev=solve(n-1);
    vector<string> ans;

    int size=prev.size();
    for(int i=0;i<size;i++){
        ans.push_back("0"+prev[i]);
    }
    for(int i=size-1;i>=0;i--){
        ans.push_back("1"+prev[i]);
    }
    
    return ans;
}

int main(){
    int n;
    cin>>n;
    
    vector<string> ans=solve(n);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    
    return 0;
}
