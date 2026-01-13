#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;
    cin>>n;
    int a[n],c=0,d=0,k=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        c+=a[i];
    }
    sort(a,a+n);
    c/=2;
    for(int i=n-1;i>=0;i--){
        d+=a[i];
        k++;
        if(c<d){
            break;
        }
    }

    cout<<k;
        
}

int main() {
    fast_io;
    solve();
    return 0;
}