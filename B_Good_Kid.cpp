#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;
    cin>>n;
    int a[n],k=1;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    a[0]+=1;
    for(int i=0;i<n;i++){
        k*=a[i];
    }
    cout<<k<<"\n";
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