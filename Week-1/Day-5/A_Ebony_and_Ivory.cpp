#include <bits/stdc++.h>

using namespace std;

int main()
{

    int a, b, c;
    cin >> a >> b >> c;
    int flag = false;
    for (int i = 0; i <= 100; i++)
    {
        for (int j = 0; j <= 10000; j++)
        {
            if ((a * i + b * j) == c)
            {
                flag = true;
                break;
            }
        }
    }
    if (flag == true)
    {
        cout << "Yes" << '\n';
    }
    else
    {
        cout << "No" << '\n';
      
    }

    return 0;
}