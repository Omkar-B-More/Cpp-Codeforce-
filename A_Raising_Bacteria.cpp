#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;
    int a=0;
    cin>>n;
    while(n){
    if(n&1==0){
        a++;
        n>>=1;
    }
    }
    cout<<a;
}

int main() {
    fast_io;
   solve();
    return 0;
}