#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int i=0;
    int add=1;
    while(i<n){
        cout<<s[i];
        i+=add;
        add++;
    }
}

int main() {
    fast_io;
    solve();
    return 0;
}