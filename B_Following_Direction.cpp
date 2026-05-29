#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int x=0,y=0;
    for(int i=0;i<n;i++){
        if(s[i]=='U'){
            y+=1;
        }
        else if(s[i]=='R'){
            x+=1;
        }
        else if(s[i]=='D'){
            y-=1;
        }
        else if(s[i]=='L'){
            x-=1;
        }
        if(x==1&&y==1){
            cout<<"YES"<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;

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