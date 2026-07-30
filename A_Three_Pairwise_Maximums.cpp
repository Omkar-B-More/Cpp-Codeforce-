#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

void solve() {
	int a[3];
	for(int &i:a){
		cin>>i;
	}
	sort(a,a+3);
	if(a[1]!=a[2]){
		cout<<"NO"<<endl;
	}
	else{
		cout<<"YES"<<endl<<a[0]<<" "<<a[0]<<" "<<a[2]<<endl;
	}
}

int main() {
	fast_io;
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}