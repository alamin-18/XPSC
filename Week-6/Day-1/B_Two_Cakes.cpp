#include <bits/stdc++.h>

using namespace std;



int main()
{
    
    int i,j,k;
    int n,m;
    int a,b;

    cin>>n>>a>>b;

    if(a>b)
        swap(a,b);

    m=0;
    for(i=1;i<=n-1;i++)
    {
        j=a/i;
        k=b/(n-i);

        if(j>=1 && k>=1)
            m=max(m,min(j,k));
    }

    cout<<m<<'\n';
    return 0;
}