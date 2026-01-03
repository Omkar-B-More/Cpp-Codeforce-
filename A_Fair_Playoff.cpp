#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int a[4],p;
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    if(min(a[0],a[1])>max(a[2],a[3])||min(a[2],a[3])>max(a[0],a[1])){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
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