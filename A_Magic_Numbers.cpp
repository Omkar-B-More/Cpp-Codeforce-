#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    string a;
    cin>>a;

    for(int i=0;i<a.length();){
        if(a[i]!='1'&&a[i]!='4'){
            cout<<"NO";
            return;
        }
        else if(a[i]=='1'&&a[i+1]=='4'&&a[i+2]=='4'){
            i+=3;
        }
        else if(a[i]=='1'&&a[i+1]=='4'){
            i+=2;
        }
        else if(a[i]=='1'){
            i++;
        }
        else{
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";

}

int main() {
    fast_io;
    solve();
    return 0;
}