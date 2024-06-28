/* 
*_File    :  A_Two_Elevators.cpp",
            *Writer    :Md Al Amin",
            *username  : alamin18",
*_Created :  28 June 2024 ||   16:45:44",
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
        int a,b,c;
        cin>>a>>b>>c;
        int x=abs(c-b)+c;
        if(a==x){
            cout<<3<<'\n';
        }
        else if(a<x){
            cout<<1<<'\n';
        }
        else{
            cout<<2<<'\n';
        }
    }
    return 0;
}