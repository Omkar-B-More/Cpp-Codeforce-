#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n,o=0,e=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
        for(int i=0;i<n;i++){
            if(a[i]%2==0){
                e+=a[i];
            }
            else{
                 o+=a[i];
            }
        }
            if(o<e){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
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