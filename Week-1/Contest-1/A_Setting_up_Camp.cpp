#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        //    int introverts=a
        int extroverts = b / 2;
        if (b % 2 != 0)
        {
            extroverts++;
        }
        int tents_needed = a + extroverts;
        if (tents_needed > c)
        {
            cout << "-1" << '\n';
        }
        else
        {
            int universals = c - tents_needed;
            int extra_universals = max(0, extroverts * 3 - b);

            universals -= min(extra_universals, universals);

            tents_needed += (universals + 2) / 3;

            cout << tents_needed << endl;
        }
    }
    return 0;
}