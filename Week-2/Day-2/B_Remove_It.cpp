#include <bits/stdc++.h>

using namespace std;



int main()
{
    
   int n,x;
   cin>>n>>x;
   vector<int>a(n);
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   vector<int>na;
   for(auto v:a){
    if(v!=x){
       na.push_back(v);
    }
   }
   for(auto v:na){
   cout<<v<<" ";
   }
    return 0;
}