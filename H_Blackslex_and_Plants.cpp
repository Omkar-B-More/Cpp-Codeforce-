#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n,q,l,r,f;
    cin>>n>>q;
    int c[n+1]={0};
    for(int i=0;i<q;i++){
        cin>>l>>r;
        for(int j=l;j<=r;j++){
            f=(j-l+1);
            // if(f%2==0){
            //     c[j]+=(f*f);
            // }
            // else{
            //     c[j]+=f;
            // }
            c[j]+=f;
        }
    }
    for(int i=1;i<=n;i++){
        cout<<c[i]<<" ";
    }

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