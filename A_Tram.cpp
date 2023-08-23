#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  int out,in;
  int current=0,maxcurrent=0;// 1 ,2
  while(n--)
  {
    cin>>out>>in;
    current+=in;
    current-=out;
    if(current>maxcurrent)
    {
        maxcurrent=current;
    }


  }
    cout<< maxcurrent<<endl;
    return 0;
}