#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    cout<<abs(a[0]-a[1])<<" "<<abs(a[0]-a[n-1])<<endl;
    for(int i=1;i<n-1;i++)
        cout<<min(abs(a[i]-a[i-1]),abs(a[i]-a[i+1]))<<" "<<max(abs(a[i]-a[0]),abs(a[i]-a[n-1]))<<endl;
        cout<<abs(a[n-1]-a[n-2])<<" "<<abs(a[n-1]-a[0])<<endl;
}

int main() {
    fast_io;
    solve();
    return 0;
}