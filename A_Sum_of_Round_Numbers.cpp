#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  while(n--){
    int a;
    cin>>a;
    int d=10;
    vector<int>v;
    while(a){
        if(a%d){
            v.push_back(a%d);
            a=a-(a%d);
        }
        d=d*10;
    }
    cout<<v.size()<<"\n";
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<"\n";

  }
}


