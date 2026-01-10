#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    string s;
    int z=0;
    cin>>s;
    for(int i=0;i<s.size();i++){
    if(i==0&&s[0]!='c'){
        z++;
    }
    else if(i==1&&s[1]!='o'){
        z++;
    }
    else if(i==2&&s[2]!='d'){
        z++;
    }
    else if(i==3&&s[3]!='e'){
        z++;
    }
    else if(i==4&&s[4]!='f'){
        z++;
    }
    else if(i==5&&s[5]!='o'){
        z++;
    }
    else if(i==6&&s[6]!='r'){
        z++;
    }
    else if(i==7&&s[7]!='c'){
        z++;
    }
    else if(i==8&&s[8]!='e'){
        z++;
    }
    else if(i==9&&s[9]!='s'){
        z++;
    }}
    cout<<z<<"\n";
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}