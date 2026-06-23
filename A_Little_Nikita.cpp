#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int m,n;
    cin>>n>>m;
    if((n-m)%2==0&&n>=m){
        cout<<"Yes"<<endl;
    }
    else{cout<<"No"<<endl;}

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