// Apple Division
#include<bits/stdc++.h>
using namespace std;

void solve(int i,int n,long long s1,long long s2,vector<int> &p,long long &mini){
    if(i==n){
        mini=min(mini,abs(s1-s2));
        return;
    }
    solve(i+1,n,s1+p[i],s2,p,mini);
    solve(i+1,n,s1,s2+p[i],p,mini);
} 

int main(){
    int n;
    cin>>n;
    vector<int> p(n);
    for(int i=0;i<n;i++) cin>>p[i];
    
    long long mini=LONG_LONG_MAX;
    solve(0,n,0,0,p,mini);
    cout<<mini<<endl;
    
    return 0;
}
