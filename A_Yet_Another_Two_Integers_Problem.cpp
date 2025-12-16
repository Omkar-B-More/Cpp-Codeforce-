#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,t;
    cin>>t;
    while(t--){
        cin>>a>>b;
        int d=abs(a-b);
        if(d%10==0){
            cout<<d/10<<endl;
        }
        else{
            cout<<d/10+1<<endl;
        }
    }
    
}