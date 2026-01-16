#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n,m;
    cin>>n>>m;
    int f[m];
    for(int i=0;i<m;i++){
        cin>>f[i];
    }
    sort(f,f+m);
    int a=INT_MAX;
    for(int i=0;i<m;i++){
        if(i+n-1==m){
            break;
        }
        a=min(a,f[i+n-1]-f[i]);
    }
    cout<<a;
}

int main() {
    fast_io;
    solve();
    return 0;
}