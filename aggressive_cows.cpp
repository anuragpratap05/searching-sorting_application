#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(ll a[],ll c,ll distance,ll n)
{
    int count=1;
    ll lst_psn=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]-lst_psn>=distance)
        {
            count+=1;
            lst_psn=a[i];
        }
        if(count==c)
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
    ll n;
    cin>>n;
    ll c;
    cin>>c;
    ll a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    ll start=0;
    ll ans=0;
    ll end=a[n-1]-a[0];
    while(start<=end)
    {
        ll mid=start+(end-start)/2;
        if(check(a,c,mid,n))
        {
            ans=mid;
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    cout<<ans<<endl;
 }
}
