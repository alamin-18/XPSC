

#include <bits/stdc++.h>

using namespace std;
int min_dis(string a, string b)
{
    int dis = 0;
    for (size_t i = 0; i < a.length(); i++)
    {
        if (a[i] != b[i])
        {
            dis++;
        }
    }
    return dis;
}
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;

        int minDis = INT_MAX;
        for (int i = 0; i <= n - m; i++)
        {

            string sub = a.substr(i, m);
            int cur_dis = min_dis(sub, b);
            if (cur_dis < minDis)
            {
                minDis = cur_dis;
            }
        }
        cout << minDis << '\n';
    }

    return 0;
}