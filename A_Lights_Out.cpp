#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int a[5][5];
    memset(a,0,sizeof(a));
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            cout<<((a[i][j]+a[i-1][j]+a[i+1][j]+a[i][j-1]+a[i][j+1])%2==0);
        }
        cout<<endl;
    }
}

int main() {
    fast_io;
    solve();
    return 0;
}