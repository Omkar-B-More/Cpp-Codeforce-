#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;
    cin>>n;
    int a[n],c=1;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        if((abs(a[i-1]-a[i])==5)||(abs(a[i-1]-a[i])==7)){
            c++;
        }
    }
    if(c==n){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}