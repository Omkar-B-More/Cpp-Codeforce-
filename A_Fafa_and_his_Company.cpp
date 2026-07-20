#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;
    cin>>n;
    int ans=0;
    for(int i=1;i<n;i++){
        if((n-i)%i==0){
            ans++;
        }
        if((n-i)<i){
            break;
        }
        if(n-i==0){
            break;
        }
    }
    // ans++;
    cout<<ans;
}

int main() {
    fast_io;
   solve();
    return 0;
}