#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long n;
    cin >> n;
    string s;
    cin >> s;
    long long sum = 0;
    int count = 0;
    for (int i = 0; i < s.size(); i++)
    {
      if (s[i] == 'L')
      {
        sum += i;
      }
      else
        sum += (n - i - 1);
    }
    
    vector<long long> v;
    for(int i=0;i<s.size()/2;i++)
    {
      if(s[i]=='L' && i<s.size()/2)
      {
        sum += abs((n - i - 1) - (i));
        v.push_back(sum);
      }
      if(s[n-i-1]=='R' && (n-i-1)>=s.size()/2)
      {
         sum += abs(i - (n - i - 1));
         v.push_back(sum);
      }
      
    }



    if (v.size() != 0)
    {
      sort(v.begin(),v.end());
      for (int i = 0; i < v.size(); i++)
      {
        cout << v[i] << " ";
      }
      for (int i = 0; i < n - v.size(); i++)
      {
        cout << v[v.size() - 1] << " ";
      }
      cout << endl;
    }
    else
    {
      for(int i=0;i<n;i++)
      {
        cout<<sum<<" ";
      }
      cout<<endl;
    }
  }
  return 0;
}