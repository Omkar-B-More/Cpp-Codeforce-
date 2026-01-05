#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n,x;
    cin>>n>>x;
    if(n<=2){
        cout<<1<<"\n";
    }
    else{
        if((n-2)%x==0){
            cout<<((n-2)/x)+1<<"\n";
        }
        else{
            cout<<(n-2)/x+2<<"\n";
        }
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