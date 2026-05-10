#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;
    vector<int>ans;
    cin>>n;
    while(n--){
    string letter;
    cin>>letter;
    for(int i=0;i<letter.length();i++){
        if(letter[i]=='#'){
            ans.push_back(i+1);
        }    
    }
    }
    reverse(ans.begin(),ans.end());
    for(int i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
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