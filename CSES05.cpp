// Permutation 
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    if(n==1) cout<<1;
    else if(n==2 || n==3) cout<<"NO SOLUTION";
    else{
        for(int i=n-1;i>=1;i--){
            if(i%2!=0) cout<<i<<" ";
        }
        cout<<n<<" ";
        for(int i=1;i<n;i++){
            if(i%2==0) cout<<i<<" ";
        }
    }
    
    return 0;
}
