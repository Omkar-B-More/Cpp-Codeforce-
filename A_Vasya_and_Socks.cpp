#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int a,b,d=0;
    cin>>a>>b;
    for(int i=1;i<=a;i++){
        if(i%b==0){
            a++;
        }
        d++;
    }
    cout<<d;
}

int main() {
    fast_io;
    solve();
    return 0;
}