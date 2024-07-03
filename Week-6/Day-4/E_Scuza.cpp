

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
        long long n, q;
        cin >> n >> q;
        vector<long long> v;
        long long p[n + 1], cur = 0;
        p[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            long long x;
            cin >> x;
            p[i] = p[i - 1] + x;
            cur = max(cur, x);
            v.push_back(cur);
        }

        while (q--)
        {
            long long x;
            cin >> x;

            long long it = upper_bound(v.begin(), v.end(), x) - v.begin();
            cout << p[it] << " ";
        }
        cout << '\n';
    }

    return 0;
}