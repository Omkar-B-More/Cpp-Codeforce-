#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    if(a<b&&b<c){
        cout<<"STAIR\n";
    }
    else if(a<b&&b>c){
        cout<<"PEAK\n";
    }
    else{
        cout<<"NONE\n";
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