#include <bits/stdc++.h>

using namespace std;



int main()
{
    
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int eat=0;
    for(int i=0;i<n;i++){
        eat+=v[i]-v[0];
    }
    cout<<eat<<'\n';
   }
    return 0;
}