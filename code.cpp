
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#include <iostream>
#include<bits/stdc++.h>
#define endl '\n'
#define ll long long int
#define pb push_back
#define pf push_front
const ll mod=1e9+7;
using namespace std;
ll k,n;
vector<ll>v;
bool cheak(ll mid)
{
    ll sum=0,i,a;
    for(i=0; i<n-1; i++)
    {
        a=v[i]+mid;
        if(a<=v[i+1])
        {
            sum+=mid;
        }
        else{
            sum+=v[i+1]-v[i];

        }
    }

    sum+=mid;

    if(sum>=k)
        return true;
    else
        return false;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t,i,j;
    ll ans,l,r,mid,a;
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
        l=0;
        r=1e18;
        while(r>=l)
        {
            mid=(l+r)/2;
            if(cheak(mid))
            {
                ans=mid;
                r=mid-1;
            }
            else
                l=mid+1;
        }

        cout<<ans<<endl;
    }





}
