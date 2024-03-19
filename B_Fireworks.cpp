#include <bits/stdc++.h>

using namespace std;



int main()
{
    
   int t;
   cin>>t;
   while(t--){
    long long int a, b, m;
    cin >> a >> b >> m;

    long long int interval_a = a * (m + 1);
    long long int interval_b = b * (m + 1);

    long long int  lcm = (a * b) / __gcd(a, b);

    long long int  intervals_lcm = lcm / interval_a + lcm / interval_b;

    
    long long int max_fireworks = intervals_lcm * (m + 1) - 1;

    cout << max_fireworks << endl;

   }
    return 0;
}