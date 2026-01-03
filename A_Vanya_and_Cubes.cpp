#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n,l=1,a=0;
    cin>>n;
    while(n>=l*(l+1)/2){
       int need=l*(l+1)/2;
       n-=need;
       a++;
       l++;
    }
    
    cout<<a<<"\n";
}

int main() {
    fast_io;
    solve();
    return 0;
}