#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n,x,y;
    cin>>n;
    for(int x=0;x<=1000;x++){
        y=n-(2020*x);
        if(y<0){
            break;
        }
        else if(y%2021==0){
            cout<<"YES"<<"\n";
            return;
        }
        else continue;
    }
    cout<<"NO"<<"\n";
}

int main() {
    fast_io;
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}