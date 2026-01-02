#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;
    cin>>n;
    int a[n],u=0,v=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]==1){
            u++;
        }
        if(a[i]==2){
            v+=2;
        }
    }
   if(u==0){
    if((v/2)%2==0){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
   }
   else if(v==0){
    if(u%2==0){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
   }
   else{
    if((u+v)%2==0){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
   }
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