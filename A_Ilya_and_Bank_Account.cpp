#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;
    cin>>n;
    if(n<0){
        int a=n/10;
        int b=n/100*10+n%10;
        cout<<max(a,b);
    }
    else{
        cout<<n;
    }
}

int main() {
    fast_io;
    solve();
    return 0;
}