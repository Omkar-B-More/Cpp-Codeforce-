#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    string s;
    cin>>s;
    int o=0,z=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==0){
            z++;o=0;
        }
        else{
            o++;z=0;
        }
        if(z==7||o==7){
            break;
        }
    }
    if(z==7||o==7){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}

int main() {
    fast_io;
   solve();
    return 0;
}