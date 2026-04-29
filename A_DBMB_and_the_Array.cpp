#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while( t -- )
	{
		int n, s, x;
		cin >> n >> s >> x;
		int a[n + 5], sum = 0;

		for( int i = 1; i <= n; i ++ ) cin >> a[i], sum += a[i];

		if( sum > s || (s - sum) % x != 0 ) cout << "NO\n";
		else cout << "YES\n";
	}
}