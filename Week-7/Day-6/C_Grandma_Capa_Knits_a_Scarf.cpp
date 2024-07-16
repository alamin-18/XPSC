		    

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
        string s;
        cin>>s;
        set<char>us(s.begin(),s.end());
        int min_o=INT_MAX;
        for(char a:us){
            int low=0,high=n-1;
            int op=0;
            bool poss=true;
            while(low<high){
                if(s[low]==s[high]){
                    low++;
                    high--;
                }
                else if (s[low] == a) {
                    low++;
                    op++;
                }
                else if (s[high] == a) {
                    high--;
                    op++;
                } 
                else {
                    poss = false;
                    break;
                }
        }
         if (poss) {
                min_o = min(min_o, op);
            }
        }
        if(min_o==INT_MAX){
            cout<<-1<<'\n';
        }
        else{
            cout<<min_o<<'\n';
        }
        
    }
   
    
    return 0;
}