#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a, b;
    cin >> a >> b;

    long long int ans = max({a + (a - 1), b + (b - 1), a + b});
    cout << ans << '\n';

    return 0;
}