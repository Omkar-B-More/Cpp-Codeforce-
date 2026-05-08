#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n,ans=0;
    cin>>n;
    vector<long long>a(n+1);
    vector<int>Ans;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    for(int i=n-1;i>=1;i--){
        if(a[i+1]>0){
            Ans.push_back(i);
            a[i]+=a[i+1];
        }
    }
    for(int i=1;i<=n;i++){
        if(a[i]>0){
            ans++;
        }
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