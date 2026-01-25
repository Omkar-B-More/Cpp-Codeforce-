#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n,t;
    cin>>n>>t;
    int a[n],ans=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;a[i]<=0;i++){
        // if(a[i]>=0){
        //     break;
        // }
        ans+=a[i];
    }
    cout<<abs(ans);

}

int main() {
    fast_io;
    solve();
    return 0;
}