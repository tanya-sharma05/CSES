// Tower of Hanoi
#include<bits/stdc++.h>
using namespace std;
 
void solve(int n,int left,int middle,int right){
    if(n==1){
        cout<<left<<" "<<right<<endl;
        return;
    } 
    
    solve(n-1,left,right,middle);
    cout<<left<<" "<<right<<endl;
    solve(n-1,middle,left,right);
}

int main(){
    int n;
    cin>>n;
    
    cout<<pow(2,n)-1<<endl;
    solve(n,1,2,3);
    
    return 0;
}
