#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    long long cnt=0,ans=0;
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]){
            cnt=(a[i-1]-a[i]);
            ans+=cnt;
            a[i]+=cnt;
        }
    }
    cout<<ans<<endl;
    
    return 0;
}