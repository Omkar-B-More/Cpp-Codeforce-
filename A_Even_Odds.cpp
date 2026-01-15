#include <bits/stdc++.h>
using namespace std;

#define fast_io                       \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define ll long long

void solve(){
    long long n, k;
    cin >> n >> k;
    n=(n+1)/2;
    if(k<=n){
        cout<<2*k-1;
    }
    else{
        cout<<(k-n)*2;
    }
}
int main()
{
    fast_io;
    solve();
    return 0;
}