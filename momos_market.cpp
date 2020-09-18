# searching-sorting_application
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int q;
    cin>>q;
    while(q--)
    {
    long long x;
    cin>>x;
    //long long y=0;
    long long c=0;
    long long ans=0;
    if(x<a[0])
    {
        cout<<"0"<<" "<<x<<endl;
        continue;
    }
        if(x==a[0])
    {
        cout<<"1"<<" "<<"0"<<endl;
        continue;
    }
    for(int i=0;i<n;i++)
    {
           x=x-a[i];
           if(x>=0)
           {
               c++;
               ans=x;
           }
           else
           {
             //cout<<c<<" "<<ans<<endl;
             break;
           }
       
    }
    cout<<c<<" "<<ans<<endl;
    }
}
