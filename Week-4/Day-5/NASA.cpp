#include <bits/stdc++.h>

using namespace std;

const int maxN = (1 << 15);

vector<int> is_palin;

void make_palin()
{
    for (int i = 0; i < maxN; i++)
    {
        string s = to_string(i);
        int len = s.length();
        bool pal = true;
        for (int i = 0; i < (len / 2); i++)
        {
            if (s[i] != s[len - i - 1])
            {
                pal = false;
                break;
            }
        }
        if (pal)
        {
            is_palin.push_back(i);
        }
    }
}

int main()
{
    make_palin();
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> cnt(maxN), a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            cnt[x]++;
            a.push_back(x);
        }
        long long ans = n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < is_palin.size(); j++)
            {
                int curr = (a[i] ^ is_palin[j]);
                ans += cnt[curr];
            }
        }
        cout << (ans / 2) << '\n';
    }

    return 0;
}