# searching-sorting_application
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
    
    vector<pair<int,int>> v;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int a1,a2;
        cin>>a1>>a2;
        pair<int, int>pair1 = make_pair(a1, a2);
        
        v.push_back(pair1);
    }
    
    /*for(int i=0;i<n;i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }*/
    
    //cout<<endl;
    
    sort(v.begin(), v.end());
    
    /*for(int i=0;i<n;i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }*/
    //cout<<endl;
    //cout<<"size="<<v.size()<<endl;
    
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        int id=lower_bound(v.begin(),v.end(),make_pair(x,0))-v.begin();
       
      if(id==0)
      {
          int ans=v[0].first-x;
          cout<<ans<<endl;
      }
      else
      {
          int ans=-1;
          if(v[id-1].second>x)
          {
              ans =0;
          }
          else if(id<v.size())
          {
              ans=v[id].first-x;
          }
          cout<<ans<<endl;
      }
       
       
     
       //cout<<id;
       
    }
    }
    
}
