#include <bits/stdc++.h>

using namespace std;

int main()
{

    int s, t;
    cin >> s >> t;
    int count = 0;
    for (int i = 0; i <= s; i++)
    {
        for (int j = 0; j <= s - i; j++)
        {
            int c = s - i - j;
            if (i * j * c <= t)
            {
                count++;
            }
        }
    }
    cout<<count<<'\n';
    return 0;
}