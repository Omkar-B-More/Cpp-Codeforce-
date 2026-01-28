#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    char c,i;
    cin>>c;
    string s="qwertyuiopasdfghjkl;zxcvbnm,./";
    while(cin>>i){
        cout<<s[s.find(i)-(c=='R')+(c=='L')];
    }
}

int main() {
    fast_io;
    solve();
    return 0;
}