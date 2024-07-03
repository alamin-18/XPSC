#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n, k, h;
        cin >> n >> k >> h;
        int cnt = 0;

        for (int A = 1; A <= n; A++) {
            for (int B = 1; B <= n; B++) {
                // Check if the frog can escape within K seconds
                if (A >= h) {
                    cnt++;
                } else if (A > B) {
                    int netGainPerSecond = A - B;
                    int totalGain = A + netGainPerSecond * (k - 1);
                    if (totalGain >= h) {
                        cnt++;
                    }
                } else if (A <= B && k * A >= h) {
                    cnt++;
                }
            }
        }
        cout << cnt << '\n';
    }
    
    return 0;
}
