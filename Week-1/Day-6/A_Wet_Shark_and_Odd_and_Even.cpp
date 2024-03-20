#include <bits/stdc++.h>

using namespace std;

int main()
{


    long long int s = 0, n;

    cin >> n;
    long long int a[n];
    for (long long int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }

    if (s % 2 == 0)
        cout << s << endl;

    else
    {
        sort(a, a + n);
        for (long long int i = 0; i < n; i++)
        {
            if ((s - a[i]) % 2 == 0)
            {
                cout << s - a[i] << endl;
                break;
            }
        }
    }
    return 0;
}