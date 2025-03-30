#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long y,x;
        cin>>y>>x;
        
        if(y>=x){
            if(y&1) cout<<(long long)((y-1)*(y-1))+x<<endl;
            else cout<<(long long)(y*y)-(x-1)<<endl;
        }
        else{
            if(x&1) cout<<(long long)(x*x)-(y-1)<<endl;
            else cout<<(long long)((x-1)*(x-1))+y<<endl;
        }
    }
    
    return 0;
}