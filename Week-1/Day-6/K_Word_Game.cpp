#include <bits/stdc++.h>

using namespace std;

int main()
{
    const int N = 3;
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        vector<set<string>> v(N);
        for (long p = 0; p < N; p++)
        {
            for (long q = 0; q < n; q++)
            {
                string s;
                cin >> s;
                v[p].insert(s);
            }
        }

        vector<long long int> score(N, 0);
        for (long p = 0; p < N; p++)
        {
            
            for ( const string &x : v[p])
            {
                long cnt = 0;
                for (long q = 0; q < N; ++q)
                {
                    if (q != p)
                        cnt += v[q].count(x);
                }

                score[p] += (cnt == 0) ? 3 : (cnt == 1);
            }
        }

        for (long long int p = 0; p < N; p++)
        {
            cout << score[p] << " ";
        }
        cout << endl;
    }

    return 0;
}