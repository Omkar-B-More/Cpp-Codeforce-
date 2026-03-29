#include <bits/stdc++.h>
using namespace std;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    vector<string> grid(10);
    for (int i = 0; i < 10; i++) {
        cin >> grid[i];
    }

    int score = 0;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (grid[i][j] == 'X') {
                int layer = min({i, j, 9 - i, 9 - j}) + 1;
                score += layer;
            }
        }
    }

    cout << score << "\n";
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}