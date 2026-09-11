#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;
    cin>>n;
    int a[n];
    int evenodd=0;
    int eveneven=0;
    int oddeven=0;
    int oddodd=0;
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if((i%2==0)&&(a[i]%2==0)){
            eveneven++;
        }
        else if((i%2==0)&&(a[i]%2!=0)){
            evenodd++;
        }
        else if((i%2!=0)&&(a[i]%2==0)){
            oddeven++;
        }
        else if((i%2!=0)&&(a[i]%2!=0)){
            oddodd++;
        }
    }
    if((oddeven>0&&oddodd>0)||(eveneven>0&&evenodd>0)){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
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