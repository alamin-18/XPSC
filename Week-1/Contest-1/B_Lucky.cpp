#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int sum_1 = 0, sum_2 = 0;
        
        for (int i = 0; i < 3; ++i)
        {
            sum_1 += s[i] - '0';
            sum_2 += s[i + 3] - '0';
        }

        if (sum_1 == sum_2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}