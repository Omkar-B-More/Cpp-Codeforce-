#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n,k=1,m=1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        if(a[i]>=a[i-1]){
            k++;
            if(m<k){
                m=k;
            }
        }
        else{
           k=1;
        }
    }
    cout<<m;
}

int main() {
    fast_io;
    solve();
    return 0;
}