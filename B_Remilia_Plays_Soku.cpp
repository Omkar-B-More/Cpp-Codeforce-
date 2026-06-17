#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n,x1,x2,k;
    cin>>n>>x1>>x2>>k;
    if((x1<=n/2)&&(x2<=n/2)){
        for(k<=0;x1++;){
            if(x1>=n){
                break;
            }
            else{
                x1+=k;
                k--;
            }
        }
    }
    else if((x1>=n/2)&&(x2>=n/2)){
        for(k<=0;x1++;){
            if(x1=n){
                break;
            }
            else{
                x1+=k;
                k--;
            }
        }

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