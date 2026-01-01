#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

bool isPrime(int n){
   for(int i=2;i*i<=n;i++){
    if(n%i==0) return false;
}
return true;
}
void solve() {
    int n,m,i;
    cin>>n>>m;

    for(i=n+1;i<=m;i++){
        if(isPrime(i)) break;
    }
    cout<<(i==m? "YES":"NO");
}

int main() {
    fast_io;
    solve();
    return 0;
}