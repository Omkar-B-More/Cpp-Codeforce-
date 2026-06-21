#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    string a,b;
    int ans=0;
    cin>>a>>b;
    for(char s:b){
        if(s==a[ans]){
            ans++;
        }
    }
    cout<<ans;

}

int main() {
    fast_io;
    solve();
    return 0;
}