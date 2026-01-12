#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int a[2],b[2];
    for(int i=0;i<2;i++){
        cin>>a[i];
    }
    for(int i=0;i<2;i++){
        cin>>b[i];
    }
    sort(a,a+2);
    sort(b,b+2);
    if((a[0]==a[1])||(b[0]==b[1])){
        cout<<"No\n";
    }
    else{
        if((a[1]==b[1])&&(a[0]!=b[0])||(a[0]==b[0])&&b[1]!=a[1]){
            cout<<"Yes\n";
        }
    }
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