#include <bits/stdc++.h>

using namespace std;
#define ll long long;

int main()
{

    ll Tc;
    cin >> Tc;
    while (Tc--)
    {
        vector<ll> v;
        ll n, k, cnt = 0, cat = 0;
        cin >> n >> k;
        for (ll i = 0; i < k; i++)
        {
            ll num;
            cin >> num;
            v.push_back(num);
        }
        sort(v.begin(), v.end());
        while (cat < v[k - 1])
        {
            cat += (n - v[k - 1]);
            cnt++;
            v.erase(v.end() - 1);
            k--;
            if (k == 0 || v.empty())
                break;
        }
        cout << cnt << endll;
    }
    return 0;
}