#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    string s;
    int n;
    cin>>n>>s;
    cout<<s[0];
    for(int i=1;i<n;i++){
        if(s[i+1]=='a'||s[i+1]=='e'){
            cout<<".";
        }
        cout<<s[i];
    }
    cout<<"\n";

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