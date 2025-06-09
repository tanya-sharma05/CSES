#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long total_sum=(1LL*n*(n+1))/2;
    if(total_sum&1) cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        vector<int> s1,s2;
        long long half=total_sum/2,sum=0;
        for(int i=n;i>=1;i--){
            if(sum+i<=half){
                s1.push_back(i);
                sum+=i;
            }
            else s2.push_back(i);
        }
        
        cout<<s1.size()<<endl;
        for(int i=0;i<s1.size();i++) cout<<s1[i]<<" ";
        cout<<endl;
        cout<<s2.size()<<endl;
        for(int i=0;i<s2.size();i++) cout<<s2[i]<<" ";
        cout<<endl;
    }
    
    return 0;
}
