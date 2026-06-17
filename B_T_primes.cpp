#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int n;
    cin>>n;
    int a[n];
    for(int j=0;j<n;j++){
        cin>>a[j];
    }
    for(int i=0;i<n;i++){
        int c=2;
        if(a[i]%2==0&&a[i]!=2){
            c++;
        }
        if(a[i]%3==0&&a[i]!=3){
            c++;
        }
        if(a[i]%4==0&&a[i]!=4){
            c++;
        }
        if(a[i]%5==0&&a[i]!=5){
            c++;
        }
        if(a[i]%7==0&&a[i]!=7){
            c++;
        }
        if(c==3){
            cout<<"YES\n";
        }
        else{
        cout<<"NO\n";}
    }

}

int main() {
    fast_io;
    solve();
    return 0;
}