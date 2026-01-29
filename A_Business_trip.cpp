#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n,c=0;
    cin>>n;
    int a[12];
    int maxi=INT_MIN;
    for(int i=0;i<12;i++){
        cin>>a[i];
    }
    sort(a,a+12);
    for(int i=11;i>=0;i--){
        if(n<=0){
            cout<<c;
            return;
        }
        n-=a[i];
        c++;
    }
    cout<<(n<=0?c:-1);
    return;
}

int main() {
    fast_io;
    solve();
    return 0;
}