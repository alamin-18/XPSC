#include <bits/stdc++.h>

using namespace std;
// #define ll long long int;

int main()
{

    long long int Tc;
    cin >> Tc;
    while (Tc--)
    {
        vector<long long int> v;
        long long int n, k, cnt = 0, cat = 0;
        cin >> n >> k;
        for (long long int i = 0; i < k; i++)
        {
            long long int num;
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
        cout << cnt << endl;
    }
    return 0;
}