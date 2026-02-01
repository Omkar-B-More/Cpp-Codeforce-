#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n,ansx=0,ansy=0,ansz=0;
    cin>>n;
    while(n--){
        int a[3];
        for(int i=0;i<3;i++){
            cin>>a[i];
            if(i==0){
                ansx+=a[i];
            }
            else if(i==1){
                ansy+=a[i];
            }
            else{
                ansz+=a[i];
            }
        }
    }
    if(ansx==0&&ansy==0&&ansz==0){
        cout<<"YES"
        ;
    }
    else{
        cout<<"NO";
    }
}

int main() {
    fast_io;
    solve();
    return 0;
}