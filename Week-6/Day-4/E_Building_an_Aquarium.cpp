

#include <bits/stdc++.h>

using namespace std;
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        auto ok = [&](int mid)
        {
            long long t = 0;
            for (int i = 0; i < n; i++)
            {
                if (mid > a[i])
                {
                    t += (mid - a[i]);
                }
                else
                {
                    break;
                }
            }

            return t <= x;
        };
        long long l = 0, r = 2e9, mid, ans = 0;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (ok(mid))
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}