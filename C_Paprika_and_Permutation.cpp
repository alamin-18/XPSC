#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

int main() {
    int test_cases, n, x;
    std::cin >> test_cases;
    
    while (test_cases--) {
        std::cin >> n;
        int t = 0;
        std::vector<int> a(n + 1, 0);
        std::vector<int> b(n + 1, 0);
        
        for (int i = 1; i <= n; ++i) {
            std::cin >> x;
            if (x <= n && !a[x]) {
                a[x] = 1;
            } else {
                b[++t] = x;
            }
        }
        
        std::sort(b.begin() + 1, b.begin() + t + 1);
        
        bool possible = true;
        for (int i = 1, idx = 1; i <= n; ++i) {
            if (!a[i]) {
                if (i * 2 >= b[idx]) {
                    std::cout << "-1\n";
                    possible = false;
                    break;
                } else {
                    idx++;
                }
            }
        }
        
        if (possible) {
            std::cout << t << "\n";
        }
    }
    
    return 0;
}
