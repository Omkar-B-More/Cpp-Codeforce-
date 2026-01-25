#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int long long n;
    cin>>n;
    while(n%2==0){
        n/=2;
    }
    cout<<(n>1 ?"YES":"NO")<<endl;
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