#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        cout<<"First\n";
    }
    else if(a<b){
        cout<<"Second\n";
    }
    else if(a==b){
        if(c%2==1){
            cout<<"First\n";
        }
        else{
            cout<<"Second\n";
        }
    }
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