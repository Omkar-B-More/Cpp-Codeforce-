#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;
    cin>>n;
    string s;
    for(int i=9;i>0;i--){
        if(n>=i){
            s=to_string(i)+s;
            n-=i;
        }
    }
    cout<<(n==0?s:"-1")<<"\n";
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