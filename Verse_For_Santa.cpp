
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
vector<ll>v;
vector<pair<ll,ll> >ans;
vector<ll>p;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,j,t;
    ll n,a,sum,k,key;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>n>>k;
        v.clear();
        p.clear();
        ans.clear();
        for(i=0; i<n; i++)
        {
            cin>>a;
            sum+=a;
            p.pb(sum);
            v.pb(a);
        }
        a=upper_bound(p.begin(),p.end(),k)-p.begin();
        if(a==n)
            cout<<0<<endl;
        else
        {
            for(i=0; i<n; i++)
            {
                key=k+v[i];
                a=upper_bound(p.begin(),p.end(),key)-p.begin();
                a--;
                if(a<i)
                    break;
                ans.pb({a,i+1});
            }
            sort(ans.begin(),ans.end());
            cout<<ans[ans.size()-1].second<<endl;

        }

    }




    return 0;

}

