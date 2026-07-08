#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve() {
    string s;
    cin >> s;
    
    vector<int> cnt(2, 0);
    for (int i = 0; i < s.length(); i++) {
        cnt[s[i] - '0']++;
    }
    
    for (int i = 0; i <= s.length(); i++) {
        if (i == s.length() || cnt[1 - (s[i] - '0')] == 0) {
            cout << s.length() - i << "\n";
            break;
        }
        cnt[1 - (s[i] - '0')]--;
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}