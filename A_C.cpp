#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int ans=0; 
    long long int a,b,n;
    cin>>a>>b>>n;
    while(max(a,b)<=n){
        if(a<b){
            a+=b;
            ans++;}
        else{
            b+=a;
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