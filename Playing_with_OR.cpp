#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < (1 << n); i++)
        {

            for (int j = 0; j < n; j++)
            {
                if ((i >> j) & 1)
                {
                    
                }
            }
        }
    }

    return 0;
}