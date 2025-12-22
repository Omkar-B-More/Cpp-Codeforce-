#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;
    cin>>n;
    if((n/2)%2!=0){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
        for(int i=1;i<=n/2;i++){
            cout<<i*2<<" ";
        }
        for(int i=1;i<n/2;i++){
            cout<<i*2-1<<" ";
        }
        cout<<n+(n/2-1)<<"\n";
    }

}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}