#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int d;cin>>d;
        if(d>=1900){
            cout<<"Division 1"<<endl;
            
        }
        else if(d>=1600&&1899>=d){
            cout<<"Division 2"<<endl;

        }
        else if(d>=1400&&1599>=d){
            cout<<"Division 3"<<endl;
        }
        else{
            cout<<"Division 4"<<endl;
        }
    }
    
}