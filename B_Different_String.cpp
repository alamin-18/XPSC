#include <bits/stdc++.h>

using namespace std;



int main()
{
    
   int t;
   cin>>t;
   while(t--){
    string s;
        cin >> s;

        
        string sorted_s = s;
        sort(sorted_s.begin(), sorted_s.end());

    
        if (sorted_s == s ) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
            next_permutation(s.begin(), s.end());
            cout << s << endl;
        }
   }
    return 0;
}