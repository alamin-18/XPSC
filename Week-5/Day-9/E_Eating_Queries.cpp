/*
 *_File    :  E_Eating_Queries.cpp",
 *Writer    :Md Al Amin",
 *username  : alamin18",
 *_Created :  27 June 2024 ||   22:33:17",
 */

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
        int n, q;
        cin >> n >> q;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());

        vector<long long> new_vec(n);
        partial_sum(v.begin(), v.end(), new_vec.begin());

        while (q--)
        {
            int x;
            cin >> x;
            auto it = lower_bound(new_vec.begin(), new_vec.end(), x);
            if (it == new_vec.end())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << it - new_vec.begin() + 1 << '\n';
            }
        }
    }

    return 0;
}