#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    string s;
    cin>>s;
    string card;
    while(cin>>card){
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                if(s[i]==card[j]){
                    cout<<"YES"<<endl;
                    return;
                }
            }
        }
    }
    cout<<"NO"<<endl;
}

int main() {
    fast_io;
    solve();
    return 0;
}