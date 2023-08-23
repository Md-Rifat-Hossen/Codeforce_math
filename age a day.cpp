#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    cout<<num/365<< " years"<<endl;
    num=num%365;
    cout<<num/30<< " months" <<endl;
    num=num%30;
    cout<<num<<" days"<<endl;

    return 0;
}
