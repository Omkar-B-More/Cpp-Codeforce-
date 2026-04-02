#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int nums=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(i==0){
            nums+=s[i]-'0';
        }
        if(i==2){
            nums+=s[i]-'0';
        }
    }
    cout<<nums<<"\n";

}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}