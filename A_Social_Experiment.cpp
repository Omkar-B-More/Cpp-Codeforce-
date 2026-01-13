#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;
    cin>>n;
    if(n==2){
        cout<<"2\n";
    }
    if(n==3){
        cout<<"3\n";
    }
    if(n>=4){
        cout<<n%2<<"\n";
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