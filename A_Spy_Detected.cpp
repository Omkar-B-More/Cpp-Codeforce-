#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],c[101]={0};
        for(int i=1;i<=n;i++){
            cin>>a[i];
            c[a[i]]++;
        }
        for(int i=1;i<=n;i++){
            if(c[a[i]]==1){
                cout<<i<<"\n";
                
            }
        }


    }
}