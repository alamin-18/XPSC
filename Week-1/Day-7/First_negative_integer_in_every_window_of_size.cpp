// vector<long long> printFirstNegativeInteger(long long int a[],
//                                              long long int n, long long int k) {
//                                                  vector<long long>ans;
//                                                  long long int i=n-1;
//                                                  long long int j=n-1;
//                                                  long long int f=-1;
//                                                  while(i >=0 && j>=0)
//                                                  {
//                                                      if(a[i] < 0)
//                                                      {
//                                                          f=i;
//                                                      }
//                                                      if(j-i+1==k)
//                                                      {
//                                                          if(f!=-1)
//                                                          {
//                                                              ans.push_back(a[f]);
//                                                          }
//                                                          else
//                                                          {
//                                                              ans.push_back(0);
//                                                          }
//                                                          if(f==j)
//                                                          {
//                                                              f=-1;
//                                                          }
//                                                          i--;
//                                                          j--;
//                                                      }
//                                                      else
//                                                         i--;
//                                                  }
//                                                  reverse(ans.begin(),ans.end());
//                                                  return ans;

//  }