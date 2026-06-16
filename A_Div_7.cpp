#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;
    cin>>n;
    if(n%7==0){
        cout<<n<<endl;
        return;
    }
    else{
        for(int i=1;i<=10;i++){ 
            if((n-(n%10)+i)%7==0){
                cout<<n-(n%10)+i<<endl;
                return;
        }}
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