#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int m,n;
    cin>>m>>n;
    m=min(m,n);
    if(m%2==0){
        cout<<"Malvika";
    }
    else{
        cout<<"Akshat";
    }
}

int main() {
    fast_io;
    solve();
    return 0;
}