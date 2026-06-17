#include <iostream>

using namespace std;

int main() {
    int n, x, y;
    
    if (!(cin >> n)) return 0;
    
    for (int i = 1; i <= n; i++) {
        cin >> x >> y;
        
        if (x != y) {
            cout << "Happy Alex" << endl;
            return 0;
        }
    }
    
    cout << "Poor Alex" << endl;
    
    return 0;
}
