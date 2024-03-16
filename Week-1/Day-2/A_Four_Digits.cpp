#include <bits/stdc++.h>

using namespace std;



int main()
{
    
   int a;
   cin>>a;
   string b=to_string(a);
   while(b.length()<4){
    b="0"+b;
   }
   cout<<b<<'\n';
    return 0;
}