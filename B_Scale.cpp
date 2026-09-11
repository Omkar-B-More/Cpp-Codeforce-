#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int a,b;
    cin>>a>>b;
    int arr[a][a];
    for(int i=0;i<a;i++){
        for(int j=0;j<a;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<a;i+=b){
        for(int j=0;j<a;j+=b){
            cout<<arr[i][j]<<" ";
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