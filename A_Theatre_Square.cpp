#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    if(a%c==0){
        cout<<(a/c)*c;
    }
    else if(b%c==0){
        cout<<(b/c)*c;
    }
    else{
        cout<<c;
    }
}

int main() {
    fast_io;
    solve();
    return 0;
}