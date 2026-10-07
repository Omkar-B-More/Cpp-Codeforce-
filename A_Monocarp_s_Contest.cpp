#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n,one=0,zero=0,ans=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==0){
            zero++;
        }
        else{
            one++;
        }
    }
    if(n==2){
        if((n==2)&&(one>0)){
            cout<<-1<<endl;
            return;
        }
        else{
            cout<<0<<endl;
            return;
        }
    }
    else{
        if(one==n){
            cout<<-1<<endl;
            return;
        }
        else{
            if(zero>=2){
                if((a[0]==1)&&(a[n-1]==0)){
                    ans++;
                }
                if((a[n-1]==1)&&(a[0]==0)){
                    ans++;
                }
                if((a[0]==1)&&(a[n-1])==1){
                    ans+=2;
                }
            }
            else{
                cout<<-1<<endl;
                return;
            }
        }

    }
    cout<<ans<<endl;
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