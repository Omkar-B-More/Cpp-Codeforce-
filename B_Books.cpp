#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n,t;
    cin>>n>>t;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int left=0;int right=n-1,ans=0;
    while((left<right)&&t!=0){
        if(right>=left){
            t-=a[right];
            right--;
            ans++;
        }
        else{t-=a[left];left++;ans++;}
    }
    cout<<ans;
}

int main() {
    fast_io;
    solve();
    return 0;
}