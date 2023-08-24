#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  int n;
  cin>>n;
  int a,b;
  int count=0;
  for(int i=0;i<n;i++)
  {
    
    cin>>a>>b;
    
  if(a-b>=2)
  {
    count++;
  }
  }
  
  cout<< count;
  

    return 0;
}