

#include <bits/stdc++.h>

using namespace std;
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n, x, y;
    cin >> n >> x >> y;

    auto ok = [&](long long mid)
    {
        long long int time = mid - min(x, y);
        if (time < 0)
            return false;
        return (floor(time / x) + floor(time / y)) >= n - 1;
    };
    long long l = 1, r = 2 * 1e9, mid, ans = 0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << '\n';
    return 0;
}