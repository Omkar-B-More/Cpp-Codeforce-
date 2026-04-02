#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int s,n;
    cin>>s>>n;
    vector<int>dr;
    vector<int>bo;
    while(n--){
        int a,b;
        cin>>a>>b;
        dr.push_back(a);
        bo.push_back(b);
    }
    // sort(dr.begin(),dr.end());
    for(int i=0;i<n;i++){
        if(dr[i]<s){
            s+=bo[i];
        }
        else{
            
        }
    }

    if(n==0){
        cout<<"NO";
        return;
    }
    cout<<"YES";
}

int main() {
    fast_io;
    solve();
    return 0;
}