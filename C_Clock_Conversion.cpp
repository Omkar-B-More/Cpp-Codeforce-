#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int h,m;char c;
    cin>>h>>c>>m;
    if(h==0&&m<10){
        cout<<12<<c<<0<<m<<" AM"<<"\n";
    }
    else if(h==0&&m>=10){
        cout<<12<<c<<m<<" AM"<<"\n";
    }
    else if(1<=h&&h<=9&&m<10){
        cout<<0<<h<<c<<0<<m<<" AM"<<"\n";
    }
    else if(1<=h&&h<=9&&m>=10){
        cout<<0<<h<<c<<m<<" AM"<<"\n";
    }
    else if(h>=10&&h<=11&&m<10){
        cout<<h<<c<<0<<m<<" AM"<<"\n";
    }
    else if(h>=10&&h<=11&&m>=10){
        cout<<h<<c<<m<<" AM"<<"\n";
    }
    else if(h==12&&m<10){
        cout<<h<<c<<0<<m<<" PM"<<"\n";
    }
    else if(h==12&&m>=10){
        cout<<h<<c<<m<<" PM"<<"\n";
    }
    else if(12<h&&h<22&&m<10){
        cout<<0<<h-12<<c<<0<<m<<" PM"<<"\n";
    }
    else if(12<h&&h<22&&m>=10){
        cout<<0<<h-12<<c<<m<<" PM"<<"\n";
    }
    else if(h>=22&&m<10){
        cout<<h-12<<c<<0<<m<<" PM"<<"\n";
    }
    else if(h>=22&&m>=10){
        cout<<h-12<<c<<m<<" PM"<<"\n";
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