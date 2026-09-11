#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int ans=0;
    string s;
    cin>>s;
    vector<char>m;
    for(int i=0;i<s.length();i++){
        if(s[i]=='Q'||s[i]=='A'){
            m.push_back(s[i]);
        }
    }
    for(int i=0;i<m.size();i++){
        if(m[i]=='Q'){
            for(int j=i+1;j<m.size();j++){
                if(m[j]=='A'){
                    for(int k=j+1;k<m.size();k++){
                        if(m[k]=='Q'){
                            ans++;
                        }
                    }
                }
            }
        }
    }
    cout<<ans;
}

int main() {
    fast_io;
    solve();
    return 0;
}