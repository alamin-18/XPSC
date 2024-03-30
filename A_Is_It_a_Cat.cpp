#include <bits/stdc++.h>

using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        int n;
        cin >> n;
        string s, cat = "meow";
        cin >> s;
        for (char &c : s)
            c = tolower(c);
        string sound;
        for (int i = 0; i < s.size(); ++i)
        {
            if (sound.empty() || sound.back() != s[i])
                sound.push_back(s[i]);
        }
        if (cat == sound)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}