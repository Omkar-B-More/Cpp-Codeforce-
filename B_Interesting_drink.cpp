#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    long long n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int q;
    cin>>q;
    while(q--){
        int b;
        cin>>b;
        int c=upper_bound(a,a+n,b)-a;
        cout<<c<<"\n";
    }

}


int main() {
    fast_io;
    solve();
    return 0;
}