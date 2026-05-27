#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n,ans;
    cin>>n;
    if(n<=10){
        cout<<n<<endl;
    }
    else if(n<=100&&n>=11){
        cout<<10+(n/10)-1<<endl;
    }
    else if(n<=1000&&n>=101){
        if(n/100==0){
            cout<<10+(n/10)-1<<endl;
        }
        else{
            cout<<10+(n/10)-2<<endl;
        }
    }
    else if(n<=10000&&n>=1001){
        if(n/1000==0){
            cout<<10+(n/10)-1<<endl;
        }
        else{
            cout<<10+(n/10)-3<<endl;
        }
    }
    else if(n<=100000&&n>=10001){
        if(n/1000==0){
            cout<<10+(n/10)-1<<endl;
        }
        else{
            cout<<10+(n/10)-4<<endl;
        }
    }
    else if(n<=100000&&n>=100001){
        if(n/1000==0){
            cout<<10+(n/10)-1<<endl;
        }
        else{
            cout<<10+(n/10)-4<<endl;
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