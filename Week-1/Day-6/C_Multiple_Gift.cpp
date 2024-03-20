#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long int x, y;
    cin >> x >> y;

    long long int max= 1;

    long long int current = x;
    
    while (current * 2 <= y)
    {
        current *= 2;
        max++;
    }

    cout << max<< endl;

    return 0;
}