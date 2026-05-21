#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n,ans=INT_MAX;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){   
        ans=min(abs(a[i]-0),ans);
    }
    cout<<ans;

}

int main() {
    fast_io;
    solve();
    return 0;
}