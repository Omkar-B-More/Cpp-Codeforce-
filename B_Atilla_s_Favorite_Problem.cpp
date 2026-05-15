#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    char maxs=s[0];
    for(int i=0;i<n;i++){
        if(s[i]>maxs){
            maxs=s[i];
        }
    }
    cout<<'a'+maxs-193<<endl;
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