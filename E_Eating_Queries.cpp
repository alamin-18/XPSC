/* 
*_File    :  E_Eating_Queries.cpp",
            *Writer    :Md Al Amin",
            *username  : alamin18",
*_Created :  27 June 2024 ||   22:33:17",
*/		    

#include <bits/stdc++.h>

using namespace std;
int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
   int t;
   cin>>t;
   while(t--){
    int n,q;
    cin>>n>>q;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=v[i];
        v[i]=sum;
    }
    
    while(q--){
        int x;
        cin>>x;
        auto it = upper_bound(v.begin(),v.end(),x);
        cout<<it-v.begin()<<'\n';
    }
   }
    
    return 0;
}