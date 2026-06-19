#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;
    cin>>n;
    int a[n];
    vector<int>temp;
    for(int i=0;i<n;i++){
        cin>>a[i];
        temp.push_back(a[i]);
    }
    sort(temp.begin(),temp.end());
    for(int i=0;i<n;i++){
        if(a[i]==temp[n-1]){
            cout<<a[i]-temp[n-2]<<" ";
        }
        else{
            cout<<a[i]-temp[n-1]<<" ";
    }
    
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