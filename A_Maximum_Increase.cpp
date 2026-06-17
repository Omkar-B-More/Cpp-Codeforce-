#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;
    int c=1, ans=1;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1]){
            c++;
        }
        else{
            c=1;
        }
        ans=max(ans,c);
    }
    cout<<ans<<"\n";
}

int main() {
    fast_io;
    solve();
    return 0;
}