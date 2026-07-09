#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n,ans=0,po,pt;
    cin>>n;
    string a;
    cin>>a;
    if(n==1&&a[n]=='B'){
        ans++;
    }
    else{
        ans=n;
    for(int i=0;i<n;i++){
        if(a[i]=='B'){
            po=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(a[i]=='B'){
            pt=i;
            break;
        }
    }
    ans=ans-(po-0)-((n-1)-pt);
}
    cout<<ans<<endl;

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