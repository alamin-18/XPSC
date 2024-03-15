#include <bits/stdc++.h>

using namespace std;



int main()
{
    
   int a,b;
   cin>>a>>b;
   int count=0;
   count=b-a+1;
   if(a>b)cout<<"0"<<'\n';
   else cout<<count<<'\n';
    return 0;
}