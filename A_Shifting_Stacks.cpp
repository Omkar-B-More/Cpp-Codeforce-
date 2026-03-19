#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
void solve() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(auto &i:a) cin>>i;
    long long sum=0,req=0,flag=0;
    for(int i=0;i<n;i++){
        req+=i;
        sum+=a[i];
        if(sum<req)flag=1;
    }
    cout<<(flag==0?"YES\n":"NO\n");
    
    
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