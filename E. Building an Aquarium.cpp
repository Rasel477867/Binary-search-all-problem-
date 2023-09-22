
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#include <iostream>
#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define pb push_back


using namespace __gnu_pbds;
using namespace std;
vector<ll>v;
ll n,k;
bool cheak(ll mid)
{
    ll sum=0,i;
    for(i=0; i<n; i++)
    {
        if(mid<=v[i])
            continue;
        else
            sum+=mid-v[i];
    }
    if(sum<=k)
        return true;
    else
        return false;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t,a,ans,mid,l,r,i;
    cin>>t;

    while(t--)
    {
      cin>>n>>k;
      v.clear();
      for(i=0; i<n; i++)
      {
          cin>>a;
          v.pb(a);
      }
      l=1;
      r=1e10;
      while(l<=r)
      {
          mid=(l+r)/2;
          if(cheak(mid))
          {
              ans=mid;
              l=mid+1;

          }
          else
            r=mid-1;
      }
      cout<<ans<<endl;
    }




    return 0;

}
