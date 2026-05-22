#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n,ans=0,x;
    cin>>n;
    for(int i=0;i<n-1;i++){
        cin>>x;
        ans+=x;
    }
    cout<<-ans<<endl;

}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}