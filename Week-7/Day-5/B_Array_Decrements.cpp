
#include <bits/stdc++.h>

using namespace std;
int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>b(n);

        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int reduc=0;
        for(int i=0;i<n;i++){
            cin>>b[i];
            reduc=max(reduc,a[i]-b[i]);
        }
        bool ans=true;
        for(int i=0;i<n;i++){
            if(a[i]-reduc<b[i]&&b[i]!=0){
                ans=false;
            }
            
        }
        if(ans){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
   
    
    return 0;
}