#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n,odd=0,even=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0){
            even++;
        }
        else{
            odd++;
        }
    }
    if((n/2)!=0){
        if(odd<even){
            cout<<"Elsie"<<endl;
        }
        else{
            cout<<"Bessie"<<endl;
        }
    }
    else{
        if(odd<even){
            cout<<"Elsie"<<endl;
        }
        else{
            cout<<"Bessie"<<endl;
        }
    }
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