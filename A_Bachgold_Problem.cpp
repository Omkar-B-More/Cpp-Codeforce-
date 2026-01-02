#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;
    cin>>n;
    cout<<n/2<<"\n";
    for(int i=1;i<n/2;i++){
        cout<<2<<" ";
    }
    cout<<n%2+2;
}

int main() {
    fast_io;
   solve();
    return 0;
}