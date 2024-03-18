#include <bits/stdc++.h>

using namespace std;



int main()
{
    
   int t;
   cin>>t;
   while(t--){
    int ratting;
    cin>>ratting;
    if(ratting >=1900){
        cout<<"Division 1"<<'\n';
    }
    else if(ratting >= 1600 && ratting <=1899){
        cout<<"Division 2"<<'\n';
    }
    else if(ratting >= 1400 && ratting <=1599){
        cout<<"Division 3"<<'\n';
    }
    else {
        cout<<"Division 4"<<'\n';
    }
   }
    return 0;
}