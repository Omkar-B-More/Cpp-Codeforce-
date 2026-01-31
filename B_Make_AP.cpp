#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int a,b,c,A,B,C;
    cin>>a>>b>>c;
    A=b-(c-b);
    B=a+(c-a)/2;
    C=b+(b-a);
    if(A && A>=a && A%a==0) cout<<"YES\n";
    else if(B && B>=b && (c-a)%2==0 && B%b==0) cout<<"YES\n";
    else if(C && C>=c && C%c==0) cout<<"YES\n";
    else cout<<"NO\n";
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