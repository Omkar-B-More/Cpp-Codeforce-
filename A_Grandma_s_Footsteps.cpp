#include <bits/stdc++.h>
using namespace std;

int main() {
    int S, A, B, X;
    cin >> S >> A >> B >> X;

    int cycle = A + B;
    int fullCycles = X / cycle;
    int remain = X % cycle;

    int runInRemain = min(remain, A);

    long long totalRun = 1LL * S * (fullCycles * A + runInRemain);

    cout << totalRun << endl;
    return 0;
}
