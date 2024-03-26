#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string s1, s2;
        cin >> s1 >> s2;
        replace(s1.begin(), s1.end(), 'B', 'G');
        replace(s2.begin(), s2.end(), 'B', 'G');
        cout << (s1 == s2 ? "YES" : "NO") << '\n';
    }
    return 0;
}