#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int l,a,b_ini,c;
        cin>>l>>a>>b_ini;
        int x[l+(l/2)];
        for(int i=1;i<=l+(l/2);i++){
            int b_curr=b_ini*(i);
            c=(a+b_curr)%l;
            x[i-1]=c;
        }
        sort(x,x+l);
        cout<<x[l-1]<<endl;
    }
}