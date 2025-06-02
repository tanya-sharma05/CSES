// Missing number
// Approach 1
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

// Approach 2
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    int x;
    unordered_map<int,int> mp;
    for(int i=1;i<n;i++){
        cin>>x;
        mp[x]++;
    }
    for(int i=1;i<=n;i++){
        if(mp.find(i)==mp.end()) cout<<i<<endl;
    }
 
    return 0;
}
