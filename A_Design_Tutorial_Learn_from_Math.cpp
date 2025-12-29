#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;
    cin>>n;
    if(n/2==0){
        cout<<"4"<<" "<<n-4;
    }
    else{
        cout<<"9"<<" "<<n-9;
    }
}

int main() {
    fast_io;
    solve();
    return 0;
}