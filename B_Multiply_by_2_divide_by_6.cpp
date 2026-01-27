#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long


int main() {
    fast_io;
    ll t,c,n;
    cin >> t;
    while (t--) {
    cin>>n;
    c=0;
    while(n%6==0){
        n/=6;
        c++;
    }
    while(n%3==0){
        n/=3;
        c+=2;
    }
    if(n!=1){
        c=-1;
    }
    cout<<c<<"\n";


    }
    return 0;
}