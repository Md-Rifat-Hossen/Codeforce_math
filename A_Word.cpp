/*
tree types is solve 
1.fist count the uper  latter and count the lower latter 
2.condition chcek couunter number big or small
if bigg bigger all string cout upper latter 


 */



#include<bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin>>s;
  int small=0,big=0;
  for(int i=0;i<s.size();i++)
  {
     if(s[i]>=97 && s[i]<=122)
  {
    small++;
  }
  else if(s[i]>=65 && s[i]<=97)
  {
    big++;
  }

  }
 if(big>small)
 {
    for(int i=0;i<s.size();i++)
    {
        s[i]=toupper(s[i]);
    }
    cout<<s<<endl;
 }
 else
 {
    for(int i=0;i<s.size();i++)
    {
        s[i]=tolower(s[i]);
    }
    cout<<s<<endl;
 }
    return 0;
}