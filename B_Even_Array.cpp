#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n,e=0,o=0;
    cin>>n;
    int a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   for(int i=0;i<n;i++){
    if(i%2==0&&a[i]%2==1){
        e++;
    }
    if(i%2==1&&a[i]%2==0){
        o++;
    }
   }
   if(e!=o){
    cout<<-1<<"\n";
   }
   else{
    cout<<e<<"\n";
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