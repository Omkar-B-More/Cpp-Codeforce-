#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int x=0,y=0;
        for(int i=0;i<3;i++){
            x+=s[i]-'0';
        }
        for(int i=3;i<6;i++){
            y+=s[i]-'0';
        }
        
        if(x==y){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
}