#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int flag=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'){
            if(flag==1){
                cout<<" "; 
            }
            i+=2;
        }
        else cout<<s[i]; flag=1;
    }
}

int main() {
    fast_io;
    solve();
    return 0;
}