#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int a[5],c=0;
    string f;
    cin>>a[1]>>a[2]>>a[3]>>a[4]>>f;
    for(int i=0;i<f.size();i++){
        c+=a[f[i]-'0'];
    }
    cout<<c;
    
}

int main() {
    fast_io;
    solve();
    return 0;
}