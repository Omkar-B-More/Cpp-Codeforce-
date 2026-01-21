#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;
    cin>>n;
    vector<int>ans;
    while(n>0){
        int a=n%10;
        ans.push_back(a);
        n=n/10;
    }
    sort(ans.begin(),ans.end());
    cout<<ans[0]<<"\n";
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