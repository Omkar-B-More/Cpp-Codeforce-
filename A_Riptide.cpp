#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int a,b,c;
    int bada=0;
    int medium = 0;
    cin>>a>>b>>c;
    if((a==b)||(a==c)||(b==c)){
        cout<<0<<endl;
        return;
    }
    if(b<a&&c<a){
        bada=a;
        if(c<b){
            medium=b;
        }
        else{medium=c;}
    }
    else if(a<b&&c<b){
        bada=b;
        if(c<a){
            medium=a;
        }
        else{medium=c;}
    }
    else if(a<c&&b<c){
        bada=c;
        if(a<b){
            medium=b;
        }
        else{medium=a;}
    }
    cout<<bada-medium<<endl;
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