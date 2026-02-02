#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
    int a,b,c,Ans,ans1,ans2,ans3,ans4,ans5,ans6;
    cin>>a>>b>>c;
    ans1=a+b+c;
    ans2=a*b*c;
    ans3=a+b*c;
    ans4=a*b+c;
    ans5=(a+b)*c;
    ans6=a*(b+c);
    Ans=max(ans1,max(ans2,max(ans3,max(ans4,max(ans5,ans6)))));
    cout<<Ans;

}

int main() {
    fast_io;
    solve();
    return 0;
}