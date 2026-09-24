#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    char grid [8][8];
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            cin>>grid[i][j];
        }
    }
    for(int i=0;i<8;i++){
        int cnt=0;
        for(int j=0;j<8;j++){
            if(grid[i][j]=='R'){
                cnt++;
            }
            if(cnt==8){
                cout<<"R\n";
                return;
            }
        }
    }
    cout<<"B\n";
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