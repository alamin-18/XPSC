#include <bits/stdc++.h>

using namespace std;



int main()
{
    
    int X, N, M;
    cin >> X >> N >> M;

    if (X >= N || X + M >= N) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}