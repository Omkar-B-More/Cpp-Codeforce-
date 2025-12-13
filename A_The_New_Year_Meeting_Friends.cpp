#include <bits/stdc++.h>
#include<cmath>
using namespace std;
int main(){
    int n=3,a,b,c;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
    }
    int p=max(a,max(b,c)),q=min(a,min(b,c));
    cout<<(p-q);

}