#include<bits/stdc++.h>
using namespace std;
vector<int>in[4];
int c[4];
int main(){
    int n,t,w;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>t;
        in[t].push_back(i);
        c[t]++;
    }
    w=min(c[1],min(c[2],c[3]));
    cout<<w<<endl;
    for(int i=0;i<w;i++){
        cout<<in[1][i]<<" "<<in[2][i]<<" "<<in[3][i]<<endl;
    }
}