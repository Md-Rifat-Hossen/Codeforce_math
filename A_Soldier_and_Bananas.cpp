#include<bits/stdc++.h>
using namespace std;
int main()
{
  int k,n,w;
  int ans=0;
  cin>>k>>n>>w;
  for(int i=1;i<=w;i++)
  {
   ans+=i;
  }
  int d=k*ans;
  int s=d-n;
  if(s<0)
  {
    cout<<"0"<<endl;
  }
  else
  {

    cout<<s<<endl;
  }
  

    return 0;
}