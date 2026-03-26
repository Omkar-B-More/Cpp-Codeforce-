#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans=2;
    if(is_sorted(a,a+n)){
        ans=0;
    }
    else if(a[0]==1||a[n-1]==n){
        ans=1;
    }
    else if(a[0]==n&&a[n-1]==1){
        ans=3;
    }
    cout<<ans<<endl;
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