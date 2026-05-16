#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n,x,y,f=1,s=1;
    cin>>n;
    int a[n];
    vector<int>b;
    for(int i=0;i<n;i++){
        cin>>a[i];
        b.push_back(a[i]);
    }
    sort(b.begin(),b.end());
    for(int i=0;i<n;i++){
        if(f==1&&a[i]!=b[i]){
            x=a[i];
            f--;
        }
        else if(f==0&&a[i]!=b[i]){
            y=b[i];
            s--;
        }
        else if((f==0&&s==0)&&(a[i]!=b[i])){
            cout<<"NO";
            return;
        }
        else{
            x=1;
            y=1;
        }
    }
    cout<<"YES"<<endl<<x<<" "<<y<<endl;

    
}

int main() {
    fast_io;
    solve();
    return 0;
}