#include <bits/stdc++.h>

using namespace std;



int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Find the maximum and second maximum elements
        int max1 = -1, max2 = -1;
        for (int i = 0; i < n; ++i) {
            if (a[i] > max1) {
                max2 = max1;
                max1 = a[i];
            } else if (a[i] > max2) {
                max2 = a[i];
            }
        }

        cout << max2 << '\n';
    }
    return 0;
}