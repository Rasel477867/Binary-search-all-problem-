
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#define ll long long int
#define pb push_back
#include<bits/stdc++.h>
using namespace std;
vector<ll>v;
vector<ll>pf;
vector<ll>v1;
ll p;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,j,t;
    ll n,ans,m,a,mid,l,r,sum;
    cin>>n>>m>>p;
    for(i=0; i<n; i++)
    {
        cin>>a;
        v.pb(a);
    }
    sum=0;
    for(i=0;i<m; i++)
    {
        cin>>a;

        v1.pb(a);
    }
    sort(v1.begin(),v1.end());
    for(i=0; i<m; i++)
    {
        sum+=v1[i];
        pf.pb(sum);

    }
    sum=0;
    for(i=0; i<n; i++)
    {
        ans=-1;
        l=0;
        r=m-1;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(v1[mid]+v[i]<p)
            {
                ans=mid;
                l=mid+1;
            }
            else
                r=mid-1;
        }

        if(ans==-1)
            sum+=p*m;
        else{
            sum+=(ans+1)*v[i]+pf[ans];
            sum+=(m-(ans+1))*p;
        }
    }
    cout<<sum;




    return 0;

}

