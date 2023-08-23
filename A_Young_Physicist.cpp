#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,sum=0,sum1=1,sum2=0;
  cin>>n;
  int a[100][100];
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<3;j++)
    {
        cin>>a[i][j];
    }
    sum+=a[i][0];
     sum1+=a[i][1];
      sum2+=a[i][2];
  }
  if(sum==0 && sum2==0 && sum1==0)
  {
    cout<< "YES"<<endl;
  }
  else
  cout<< "NO"<<endl;

    return 0;
}