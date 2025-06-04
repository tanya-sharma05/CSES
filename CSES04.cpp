// Increasing array
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    
    long long cnt=0,ans=0;
    for(int i=0;i<n-1;i++){
        if(a[i+1]<a[i]){
            cnt=a[i]-a[i+1];
            ans+=cnt;
            a[i+1]+=cnt;
        }
    }
    cout<<ans<<endl;
    
    return 0;
}
