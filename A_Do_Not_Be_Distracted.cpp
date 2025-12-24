#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n,f=1;
    cin>>n;
    map <char ,int>m;
    string s;
    cin>>s;
    m[s[0]]=1;
    for(int i=1;i<n;i++){
        if(m[s[i]]==1&&s[i]!=s[i-1]){
            f=0;
            break;

        }
        m[s[i]]=1;
    }
    
    cout<<(f?"YES":"NO")<<"\n";

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