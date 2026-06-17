#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n=4,k=2,c=0;
    cin>>n>>k;
    int a[n],temp=k;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    // a[0]=0,a[1]=1,a[2]=0,a[3]=1;
    for(int i=0;i<n;){
       while(temp--){
        if(a[i]==0&&i%2==1){
            c++;
        }
        else if(a[i]==1&&i%2==1){
            c--;
        }
        else if(i%)
        i++;
       }
    }
    cout<<c<<"\n";
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