#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;
    cin>>n;
    int a[n],even=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2==0){
            even++;
        }
    }
    if(even==1){
        for(int i=0;i<n;i++){
            if(a[i]%2==0){
                cout<<i+1;
                return;
            }
        }
    }
    else{
        for(int i=0;i<n;i++){
            if(a[i]%2!=0){
                cout<<i+1;
                return;
            }
        }
    }
}

int main() {
    fast_io;
    solve();
    return 0;
}