#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;
    cin>>n;
    int a[n];
    vector<int>sorted;
    unordered_map<int,int>color;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sorted.push_back(a[i]);
    }
    sort(sorted.begin(),sorted.end());
    for(int i=0;i<n;i++){
        color[sorted[i]]=i%2;
    }
    for(int i=0;i<n-1;i++){
        if(color[a[i]]==color[a[i+1]]){
            cout<<"NO"<<"\n";
            return;
        }
    }
    cout<<"YES"<<"\n";

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