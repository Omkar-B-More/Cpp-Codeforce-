#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    string a;
    cin>>a;
    for(int i=0;i<a.size();i+=2){
        cout<<a[i];
    }
    cout<<a.back()<<endl;
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