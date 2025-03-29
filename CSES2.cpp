#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long total_sum=0;
    for(int i=1;i<n;i++){
        int x;
        cin>>x;
        total_sum+=x;
    }
    long long sum=(1LL*n*(n+1))/2;
    cout<<sum-total_sum<<endl;
    
    return 0;
}