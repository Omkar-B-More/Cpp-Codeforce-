#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n,d,sum=0;
    cin>>n>>d;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    if(sum+(10*(n-1))>d){
        cout<<-1;
    }
    else{
        cout<<(d-sum)/5;
    }
}

int main() {
    fast_io;
    solve();
    return 0;
}