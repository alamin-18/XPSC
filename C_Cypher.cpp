#include <bits/stdc++.h>

using namespace std;



int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<pair<int,string>> v;
        
        while(n--){
            int x;
            int c;
            string s;
            cin>>x;
            cin>>c>>s;
            v.push_back({x,s});
            // sv.push_back(s);
        }
        for(int i=0;i<n;i++){
            if(v[i].second[i]=='U'){
                abs(v[i].first--);
            }
            if(v[i].second[i]=='D'){
                abs(v[i].first++);
            }
        }
        for()
    }
   
    return 0;
}