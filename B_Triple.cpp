#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n,c=1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=1;i<n;i++){
        if(a[i]==a[i-1]){
            c++;
        }
        else{
            c=1;
        }
        if(c==3){
            cout<<a[i-1]<<endl;
            return;
        }
    }
    cout<<-1<<endl;
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