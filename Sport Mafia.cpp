#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#include <iostream>
#include<bits/stdc++.h>
#define endl '\n'
#define ll  long long int
#define pb push_back


using namespace __gnu_pbds;
using namespace std;




int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll i,j,t;
    ll n,a,b,sum,mid,l,r,ans,k;
    cin>>n>>k;
    l=1,r=n;
    while(l<=r)
    {
        mid=(l+r)/2;
        sum=(mid*(mid+1))/2;
        b=n-mid;
        a=sum-b;
        if(a==k)
        {
            ans=b;
            break;
        }
        if(a>k)
            r=r-1;
        else
            l=l+1;
    }
    cout<<ans;

    return 0;
}



