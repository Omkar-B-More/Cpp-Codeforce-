#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n,k,ans=INT_MIN;
    cin>>n>>k;
    int f,t;
    // while(n--){
    //     cin>>f>>t;
    //     ans=max(ans,(t>k)?(f+k-t):f);

    // }
    while(n--){
        cin>>f>>t;
        if(t<=k){
            ans=max(ans,f);
        }
        else{
            ans=max(ans,f-(t-k));
        }
    }
    cout<<ans;

}

int main() {
    fast_io;
    solve();
}