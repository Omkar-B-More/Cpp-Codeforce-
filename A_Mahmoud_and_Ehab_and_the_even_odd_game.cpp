#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;
    cin>>n;
    if(n%2==0&&n>0){
        cout<<"Mahmoud\n";
    }
    else{
        cout<<"Ehab\n";
    }
}

int main() {
    fast_io;
    solve();
    return 0;
}