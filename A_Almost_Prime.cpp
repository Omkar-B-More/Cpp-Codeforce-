#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int a[3001];
void solve() {
    int n,cnt=0;
    cin>>n;
    for(int i=2;i<=n;i++){
        if(a[i]==0){
            for(int j=i;j<=n;j+=i){
                a[j]++;
            }
        }
        if(a[i]==2){
            cnt++;
        }
    }
    cout<<cnt;
}

int main() {
    fast_io;
    solve();
    return 0;
}