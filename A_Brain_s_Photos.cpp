#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    int n,m;
    cin>>n>>m;
    char a;
    while(cin>>a){
        if(a!='B' && a!='W' && a!='G'){
            cout<<"#Color";
            return 0;
        }
    }
    cout<<"#Black&White";
}