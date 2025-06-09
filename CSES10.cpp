// Trailing Zeroes
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long cnt=0;
    for(int i=5;i<=n;i*=5){
        cnt+=(n/i);
    }
    cout<<cnt<<endl;
    
    
    return 0;
}
