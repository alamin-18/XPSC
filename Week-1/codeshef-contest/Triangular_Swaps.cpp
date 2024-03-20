#include <bits/stdc++.h>

using namespace std;



int main()
{
    
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    unordered_set<char> us;
    char s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
        us.insert(s[i]);
    }
    cout<<us.size()<<'\n';
   }
    return 0;
}