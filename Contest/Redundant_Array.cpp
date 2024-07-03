#include <iostream>
#include <cmath>
using namespace std;

bool canEscape(int A, int B, int K, int H) {
    if (A >= H) return true; // Can escape in first jump
    
    for (int t = 1; t <= K; ++t) {
        int X_t = A * t - B * (t - 1);
        if (X_t >= H) return true;
    }
    
    return false;
}

int countValidPairs(int N, int K, int H) {
    int count = 0;
    
    for (int A = 1; A <= N; ++A) {
        int low = 1, high = N, bestB = 0;
        
        while (low <= high) {
            int mid = (low + high) / 2;
            if (canEscape(A, mid, K, H)) {
                bestB = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
        count += bestB;
    }
    
    return count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int N, K, H;
        cin >> N >> K >> H;
        
        int result = countValidPairs(N, K, H);
        cout << result << "\n";
    }
    
    return 0;
}
