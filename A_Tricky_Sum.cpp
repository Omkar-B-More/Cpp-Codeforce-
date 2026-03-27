#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    long long int n,sum=0,pow2=1;
    cin>>n;
    sum=n*(n+1)/2;
    while(pow2<=n)
        sum-=pow2*2,pow2*=2;
    cout<<sum<<endl;
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