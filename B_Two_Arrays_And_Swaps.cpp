#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n,k;
    cin>>n>>k;
    int a[n],b[n],s=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    while(k--){
        sort(a,a+n);
        sort(b,b+n);
        if(b[n-1]>a[0]){
            swap(a[0],b[n-1]);
        }
    }
    for(int i=0;i<n;i++){
        s+=a[i];
    }
    cout<<s<<"\n";
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