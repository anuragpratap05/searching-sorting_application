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
    long long b[n];
    for(int i=0;i<n;i++)
    {
        long long t=(a[i]-i)/n;
        if((a[i]-i)%n!=0)
        {
            b[i]=i+(t+1)*n;
        }
        else
        {
            b[i]=i+(t*n);
        }
    }
    
    long long min=b[0];
    long long ans=1;
    for(int i=1;i<n;i++)
    {
        if(a[i]<=i)
        {
            ans=i+1;
            break;
        }
        else
        {
         if(b[i]<min)
       {
         min=b[i];
         ans=i+1;
       }
        }
    }
    cout<<ans<<endl;
    
}

