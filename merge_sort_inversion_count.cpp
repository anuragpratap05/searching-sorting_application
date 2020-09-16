# searching-sorting_application
//#include<bits/stdc++.h>
//typedef long long ll;

long long merge(long long arr[],int l, int r,long long m)
{
    
    long long count =0;
   int i=l,j=m,k=0;

	long long temp[r-l+1];
    
    
  
    
    while(i<m && j<=r)
    {
        if(arr[i]<=arr[j])
        {
            temp[k]=arr[i];
            i++;
            k++;
        }
        else
        {
            temp[k]=arr[j];
            j++;
            k++;
            count += m - i;
        }
    }
    
    while(i<m)
    {
        temp[k]=arr[i];
        i++;
        k++;
    }
    
    while(j<=r)
    {
        temp[k]=arr[j];
        j++;
        k++;
    }
    for(int i=l,k=0;i<=r;i++,k++){
		arr[i] = temp[k];
	}
   
    return count;
}

long long mergeSort(long long arr[], int l, int r)
{
    long long count =0;
    if(l<r)
    {
        long long m=(l+r)/2;
        long long x=mergeSort(arr,l,m);
        long long y=mergeSort(arr,m+1,r);
        long long z=merge(arr,l,r,m+1);
        return x+y+z;
    }
    return count;
}
long long getInversions(long long *arr, int n)
{
long long ans=mergeSort(arr,0,n-1);
   return ans;
}
