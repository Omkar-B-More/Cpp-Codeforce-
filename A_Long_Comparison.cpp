#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    double x=log10(a)+b,y=log10(c)+d;
    if(abs(x-y)<=1e-7) cout<<"="<<endl;
    else if(x>y) cout<<">"<<endl;
    else
    cout<<"<"<<"\n";
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