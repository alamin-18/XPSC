    

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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        auto ok=[&](int mid){
            multiset<int>k;
            for(auto i:a){
                k.insert(i);
            }
            for(int i=1;i<=mid;i++){
                int target=mid - i + 1;
                auto it=upper_bound(k.begin(),k.end(),target);
                if(it==k.begin()){
                    return false;
                }
                it--;
                k.erase(it);
                if(!k.empty()){
                    it=k.begin();
                    int bob=*it;
                    bob+=target;
                    k.erase(it);
                    k.insert(bob);
                }
            }
            return true;
        };
        int l=0,r=100,mid,ans=0;
        while(l<=r){
            mid=l+(r-l)/2;
            if(ok(mid)){
                ans=mid;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        cout<<ans<<'\n';
    }
   
    
    return 0;
}