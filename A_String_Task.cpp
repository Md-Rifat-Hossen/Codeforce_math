#include<bits/stdc++.h>
using namespace std;
int main()
{
  
  string s,s2;
  cin>>s;
  int i;
 for( i=0;i<s.size();i++)
 {
    if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'||s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='I'||s[i]=='U'||s[i]=='Y')

    continue;
    
     else{
    s2+='.';
    s2+=tolower(s[i]);
 }
   
 }

 cout<< s2<<endl;
 

    return 0;
}