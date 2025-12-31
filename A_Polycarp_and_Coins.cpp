#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n,a,b;
    cin>>n;
    b=n/3+(n%3==2);
    a=n/3+(n%3==1);
    cout<<a<<" "<<b<<"\n";
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