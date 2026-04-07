#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    ll sum=0;
    int a[7];
    for(int i=0;i<7;i++){
        cin>>a[i];
    }
    sort(a,a+7);
    for(int i=0;i<6;i++){
        a[i]=a[i]*-1;    
    }
    for(int i=0;i<7;i++){
        sum+=a[i];
    }
    cout<<sum<<"\n";
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