#include <bits/stdc++.h>

using namespace std;



int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        long long int num = 0;
        long long int n = s.length();
        long long int cnt;
 
        if (n % 2 == 0 and n > 2)
        {
            long long int i = 1;
            while (i < n / 2)
            {
                if (s[i] != s[i - 1])
                {
                    num++;
                    break;
                }
                i++;
            }
        }
        else if (n % 2 == 1 and n > 3)
        {
            long long int j = 1;
            while (j < n / 2)
            {
                if (s[j] != s[j - 1])
                {
                    num++;
                    break;
                }
                j++;
            }
        }
        if (num)
            cout<<"YES"<<'\n';
        else
            cout<<"NO"<<'\n';
    }
    return 0;
}