#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    int t;
    // if(b<c){
    //     if(b+1==3&&c==3){
    //         t=3;
    //     }
    //     else if(b+1==2&&c==2){
    //         t=2;
    //     } 
    //     else if(b+1==2&&c==3){
    //         t=4;
    //     }
    // }else{
    //     t=b-1;
    // }
    t=abs(b-c)+abs(c-1);
    if(t>(a-1)){
        cout<<1<<endl;
    }
    else if(t<(a-1)){cout<<2<<endl;}
    else if((a-1)==t) {cout<<3<<endl;}
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