#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int max = 0;
        int x;
        for (int i = 1; i <= n; i++)
        {
            cin >> x;
            if (x - i > max)
            {
                max = x - i;
            }
        }
        cout << max << endl;
    }
    return 0;
}