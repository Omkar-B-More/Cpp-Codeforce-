#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;
    cin>>n;
    vector<int>a[n];
    int x=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int i=1;
    while(i<n){
        if(a[i]>a[i-1]){
            x+=a[i-1];
        }
        else{
            x-=a[i];
            

        }
        i++;
    }
    cout<<x<<"\n";
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