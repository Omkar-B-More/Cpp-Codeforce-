#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],b[2]={0,0},l=0,r=n-1;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[l]>a[r]){
            b[i%2]+=a[l];
            l++;
        }
        else{
            b[i%2]+=a[r];
            r--;
        }
    }
    cout<<b[0]<<" "<<b[1];
}

