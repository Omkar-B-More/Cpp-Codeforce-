#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],k,c=0;
    cin>>k;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]+k<=5){
            c++;
        }
    }
    cout<<(c/3)<<endl;
}