#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        char c=tolower(s[i]);
        if(c!='a'&&c!='o'&&c!='y'&&c!='e'&&c!='u'&&c!='i'){
            cout<<"."<<c;
        }
    }
}

int main() {
    fast_io;
    solve();
    return 0;
}