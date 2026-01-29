#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n,o=0;
    cin>>n;
    char a;
    while(n--){
        cin>>a;
        if(a=='0'){
            o--;
        }
        else{
            o++;
        }
    }
    cout<<abs(o);
}

int main() {
    fast_io;
    solve();
    return 0;
}