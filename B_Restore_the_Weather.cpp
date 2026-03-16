#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n,k;
    cin>>n>>k;
    int ans[n],b[n];
    pair<int,int>a[n];
    for(int i=1;i<=n;i++){
        cin>>a[i].first;
        a[i].second=i;
    }
    for(int i=1;i<=n;i++){
        cin>>b[i];
    }
    sort(a+1,a+n+1);
    sort(b+1,b+n+1);
    for(int i=1;i<=n;i++){
        ans[a[i].second]=b[i];
    }
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

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