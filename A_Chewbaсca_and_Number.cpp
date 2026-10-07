#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        int d=s[i]-'0';
        if(i==0&&d==9){continue;}
        if(d>4){
            d=9-d;
        }
        s[i]=d+'0';
    }
    cout<<s;

}

int main() {
    fast_io;
    solve();
    return 0;
}