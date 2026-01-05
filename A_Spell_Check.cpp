#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
   int n;
   string s;
   cin>>n>>s;
   sort(s.begin(),s.end());
   if(s=="Timru"){
    cout<<"YES\n";
   }
   else{
    cout<<"NO\n";
   }

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