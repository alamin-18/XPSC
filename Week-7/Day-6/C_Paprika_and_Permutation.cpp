
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
    vector<bool>b(n+1,false);
    multiset<int>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<=n){
            if(b[a[i]]){
                m.insert(a[i]);
            }
            else{
                b[a[i]]=true;
            }
        }
        else{
            m.insert(a[i]);
        }
    }
    int ans=m.size();
    bool poss=true;
    
    
     for (int i = 1; i <= n && poss; i++) {
            if (!b[i]) {
                if (m.empty()) {
                    poss = false;
                }
                else {
                    int curr = *m.begin();
                   m.erase(m.begin());
                    
                    int p = (curr - 1) / 2;
                    
                    if (i > p) {
                        poss = false;
                    }
                }
            }
        }
        
        cout << (poss ? ans : -1) << '\n';

   }
    
    return 0;
}