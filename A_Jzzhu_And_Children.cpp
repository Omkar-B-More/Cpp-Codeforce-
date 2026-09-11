#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n,m;
    cin>>n>>m;
    int a[n];
    int ans=INT_MIN;
    int var;
    for(int i=0;i<n;i++){
        cin>>a[i];
        int ceile=(a[i]+m-1)/m;
        if(ans<=ceile){
            ans=ceile;
            var=i+1;
        }
    }
    cout<<var;
}

int main() {
    fast_io;
   solve();
    return 0;
}