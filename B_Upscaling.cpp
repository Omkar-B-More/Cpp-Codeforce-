#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;
    cin>>n;
    int ds=1;

    int dgg=0;
    for(int i=1;i<=2*n;i++){
        int dg=0;
        int d=2;
        for(int j=1;j<=2*n;j++){
            if(ds%2!=0){
                if(d!=0){
                    cout<<"#";
                    d--;
                }
                else {
                    cout<<".";
                    dg++;
                }
                if(dg==2){
                    d=2;
                    dg=0;
                }
            }
            else{
                if(d!=0){
                    cout<<".";
                    d--;
                }
                else {
                    cout<<"#";
                    dg++;
                }
                if(dg==2){
                    d=2;
                    dg=0;
                }
            }
        }
        dgg++;
        if(dgg==2){
            ds++;
            dgg=0;
        }
        cout<<endl;
    }
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