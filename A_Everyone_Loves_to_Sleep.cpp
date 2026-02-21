#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n,h,m;
    cin>>n>>h>>m;
    int time=60*h+m;
    int ans=24*60;
    for(int i=0;i<n;i++){
        cin>>h>>m;
        int t2=60*h+m-time; 
        if(t2<0) t2+=24*60;
        ans=min(ans,t2);
    }
    cout<<ans/60<<" "<<ans%60<<"\n";

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