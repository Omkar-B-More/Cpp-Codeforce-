#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;
    cin>>n;
    long long int ans=0,z=0,neg=0;
    while(n--){
        long long int a;
        cin>>a;
        if(a==0){
            z++;
        }
        else if(a>0){
            ans+=a-1;
        }
        else{
            ans+=-a-1;
            neg++;
        }
    }
    if(z>0){
        ans+=z;
    }
    else if(neg%2==1){
        ans+=2;
    }
    cout<<ans;
}

int main() {
    fast_io;
    solve();
    return 0;
}