#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int left=0,right=n-1;
    while(left<=right){
        if(left==right){
            cout<<a[left]<<" ";
        }
        else{
            cout<<a[left]<<" "<<a[right]<<" ";
        }
        left++;
        right--;
    }
    cout<<endl;

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