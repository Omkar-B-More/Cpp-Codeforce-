#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;
    cin>>n;
    for(int i=0;i<2*n;i++){
        int h=1;
        for(int j=0;j<2*n;j++){
        if(h%2!=0){
            h++;
            cout<<"#";
        }
        else{
            h++;
            cout<<".";
        }
        h==1;
        }
        cout<<endl;
    }
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