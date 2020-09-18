# searching-sorting_application
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll merge(int a[], int l, int r, int mid)
{
    
    ll sum=0;
    int temp[r-l+1];
    int i=l;
    int j=mid;
    int k=0;
    while(i<mid && j<=r)
    {
        if(a[i]<a[j])
        {
            sum+=(r-j+1)*a[i];
            
        
            temp[k]=a[i];
            i++;
            k++;
            
        }
        else
        {
            temp[k]=a[j];
            j++;
            k++;
        }
    }
    while(i<mid)
    {
        temp[k]=a[i];
        i++;
        k++;
    }
    while(j<=r)
    {
        temp[k]=a[j];
        k++;
        j++;
    }
    
    for(int i=l,k=0;i<=r;i++,k++){
		a[i] = temp[k];
	}
	return sum;
}

ll mergesort(int a[],int l,int r)
{
    ll c =0;
    if(r>l)
    {
        int m=(l+r)/2;
        int ans1=mergesort(a,l,m);
        int ans2=mergesort(a,m+1,r);
        int ans3=merge(a,l,r,m+1);
        return ans1+ans2+ans3;
    }
    return c;
}

/*void print(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}*/

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
    
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //print(a,n);
    //cout<<endl;
    cout<<mergesort(a,0,n-1);
    cout<<endl;
    //cout<<endl;
    //print(a,n);
    }
}
