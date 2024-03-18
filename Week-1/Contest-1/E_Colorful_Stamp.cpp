#include <bits/stdc++.h>

using namespace std;

bool Colorful(string &s,int n){

     if (s[0] == s[n - 1]) {
        return false;
    }
    for(int i=0;i<n;i++){
        if (s[i] == s[i - 1]) {
            return false;
        }
    }
    return true;
}

int main()
{
    
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    
    if(Colorful(s,n)){
        cout<<"YES"<<"\n";
    }
    else cout<<"NO"<<"\n";
   }
    return 0;
}