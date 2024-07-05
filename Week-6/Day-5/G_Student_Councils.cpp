    

#include <bits/stdc++.h>

using namespace std;
int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int k,n;
    cin>>k>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
   auto ok=[&](long long int mid){
    long long int sum = 0;
    for(int i=0; i<n; i++) {
        if (a[i] > mid) {
            sum += mid;
        }
        else {
            sum += a[i];
        }
    }
    return (sum/mid) >= k;
       
   };
    long long l=1,r=1e12,mid,ans=0;
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
    return 0;
}
