#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> c(5);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        c[x]++;
    }

    int t = c[4] + c[3];
    c[1] = max(0, c[1] - c[3]);

    t += c[2] / 2;
    if (c[2] % 2) {
        t++;
        c[1] = max(0, c[1] - 2);
    }

    t += (c[1] + 3) / 4;

    cout << t;
}