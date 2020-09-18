# searching-sorting_application
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(ll a[], ll mid, ll n,ll k)
{
    ll c=0;
    for(int i=0;i<n;i++)
    {
       c+=a[i]/mid;
       if(c>=k)
       {
           return true;
       }
    }
    return false;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        ll start=0;
        ll end=a[n-1];
        ll ans=0;
        while(start<end)
        {
            ll mid=(start+end)/2;
            if(check(a,mid,n,k))
            {
                 ans=mid;
                start=mid+1;
            }
            else
            {
                end=mid;
            }
        }
        cout<<ans<<endl;
    }
}

