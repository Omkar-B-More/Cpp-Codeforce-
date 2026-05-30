#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int a,b,x;
    cin>>a>>b;
    if(a==b){
        cout<<0<<endl;
    }
    else{
        if(a>b&&(a-b)%2==0||a<b&&(b-a)%2!=0){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
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