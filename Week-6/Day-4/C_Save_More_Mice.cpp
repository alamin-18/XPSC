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
        long long n, k;
        cin >> n >> k;
        vector<long long> v(k);
        for (int i = 0; i < k; i++)
        {
            cin >> v[i];
        }

        sort(v.rbegin(), v.rend());
        long long pos = 0;
        int total = 0;

        for (int i = 0; i < k; i++)
        {
            if (v[i] > pos)
            {
                total++;
                pos += (n - v[i]);
            }
            else
            {
                break;
            }
        }
        cout << total << '\n';
    }

    return 0;
}
