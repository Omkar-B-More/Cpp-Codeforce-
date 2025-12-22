#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
   int t;
   cin>>t;
   int m,c,a=0;
   while(t--){
    cin>>m>>c;
    if(m>c){
        a++;
    }
    else if(m<c){
        a--;
    }

}    
  if(a>0){
    cout<<"Mishka";
  }
  else if(a<0){
    cout<<"Chris";
  }
  else{
    cout<<"Friendship is magic!^^";
  }

}

int main() {
    fast_io;
    solve();
    return 0;
}