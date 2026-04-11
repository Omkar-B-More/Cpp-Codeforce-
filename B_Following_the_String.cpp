#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;
    cin>>n;
    map<char,int> freq;
    string s="";
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        for(char c='a';c<='z';c++){
            if(freq[c]==a){
                s.push_back(c);
                freq[c]++;
                break;
            }
        }
    }
    cout<<s<<endl;
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