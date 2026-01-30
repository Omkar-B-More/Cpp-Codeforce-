#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n,mc=0;
    string s,ss,twogram;
    map<string,int>smp;
    cin>>n>>s;
    for(int i=0;i<n-1;i++){
        ss=s[i];
        ss+=s[i+1];
        smp[ss]++;
        if(smp[ss]>mc){
            mc=smp[ss];
            twogram=ss;
        }
    }
    cout<<twogram;
}

int main() {
    fast_io;
    solve();
    return 0;
}