#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;
    cin>>n;
    int a[n];
    vector<int>copy;
    for(int i=0;i<n;i++){
        cin>>a[i];
        copy.push_back(a[i]);
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i]==copy[i]){
            cout<<"YES\n";
            break;
        }
        else{
            cout<<"NO\n";
            break;
        }
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