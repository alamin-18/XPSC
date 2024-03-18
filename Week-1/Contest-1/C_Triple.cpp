#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        unordered_map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            freq[v[i]]++;
        }

        int result = 0;
        for (auto &max : freq)
        {
            if (max.second >= 3)
            {
                result = max.first;
                break;
            }
        }
        if (result != 0)
        {
            cout << result << '\n';
        }
        else
            cout << "-1" << '\n';
    }
    return 0;
}