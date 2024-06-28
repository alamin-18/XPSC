/* 
*_File    :  B_Worms.cpp",
            *Writer    :Md Al Amin",
            *username  : alamin18",
*_Created :  28 June 2024 ||   12:16:23",
*/		    

#include <bits/stdc++.h>

using namespace std;
int main()
{
    
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
   
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<long long> sum(n);
    partial_sum(v.begin(), v.end(),sum.begin());
    int w;
    cin>>w;
    vector<int>wr(w);
    for(int i=0;i<w;i++){
        cin>>wr[i];
    }
    for(auto i:wr){
        auto it =lower_bound(sum.begin(),sum.end(),i);
        cout<<it-sum.begin()+1<<'\n';
    }
    return 0;
}