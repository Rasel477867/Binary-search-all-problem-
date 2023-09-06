
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
vector<ll>v1;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,j,t;
    ll a,b,ans,key,n;
    cin>>t;
    cin>>a>>b;
    key=a;
    t--;
    while(t--)
    {
        cin>>a>>b;
        ll mid,l=0,r=1e9;
        while(l<=r)
        {
            mid=(l+r)/2;
            if(a+mid*b>key)
            {
                ans=a+mid*b;
                r=mid-1;

            }
            else
                l=mid+1;
        }
        key=ans;
    }
    cout<<key;

    return 0;

}

