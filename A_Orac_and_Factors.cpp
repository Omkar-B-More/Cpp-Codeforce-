#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
long long smallest_divisor(long long n){
    for(long long i=2;i*i<=n;i++){
        if(n%2==0){
            return i;
        }
    }
    return n;
}

void solve() {
    int n,k;
    cin>>n>>k;
    if(n%2==0){
        n=n+2*k;
    }
    else{
        long long d=smallest_divisor(n);
        n+=d;
        k--;
        n+=2*k;
    }
    cout<<n<<"\n";
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