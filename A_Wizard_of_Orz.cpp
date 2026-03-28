#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;
    cin>>n;
    string s="989";
    if(n==1) cout<<"9"<<endl;
    if(n==2) cout<<"98"<<endl;
    if(n>=3){
        cout<<s;
        for(int i=0;i<n-3;i++){
            cout<<i%10;
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