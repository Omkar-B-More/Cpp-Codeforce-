#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    ll n,i,c=0;
    cin>>n>>i;
    for(int j=0;j<n;j++){
        char s;
        cin>>s;
        ll a;
        cin>>a;
        if(s=='+'){
            i+=a;
        }
        else if(s=='-'){
            if(i<a){
                c++;
            }
            else{
                i=i-a;
            }
        }
    }
    cout<<i<<" "<<c;
}

int main() {
    fast_io;
    solve();
    return 0;
}