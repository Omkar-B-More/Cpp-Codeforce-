#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,z=0,y=0;
    cin>>a>>b;
    while(a>0||b>0){
   if(a>0&&b>0){
    a--;
    b--;
    y++;
   }
   else if(a>=2){
    a-=2;
    z++;
   }
   else if(b>=2){
    b-=2;
    z++;
   }
   else{
    break;
   }
}
    cout<<y<<" "<<z;
}