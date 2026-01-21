#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int a,b,ans=0;
    cin>>a>>b;
    int m[a],n[b];
    for(int i=0;i<a;i++){
        cin>>m[i];
    }
    for(int i=0;i<b;i++){
        cin>>n[i];
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(m[i]>n[j]){
                ans++;
            }
        }
    }
    cout<<ans<<"\n";
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