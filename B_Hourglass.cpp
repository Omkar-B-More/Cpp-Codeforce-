#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int s,k,m,a=0;
    cin>>s>>k>>m;
    for(int i=0;i<m;i++){
        for(int j=0;j<s;j++){
            if(i==k){
                a=0;
            }
        }
        a++;
    }
   
    cout<<a<<"\n";
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