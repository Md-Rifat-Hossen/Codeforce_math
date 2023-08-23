#include<iostream>
using namespace std;
void fast()
{
    cin.tie(0);
    cout.sync_with_stdio(0);


}
int main()
{
    fast();
    int a,b;
    char c;

    cin>>a>>c>>b;
    if(c=='<')
    {
        if(a<b)
        {
            cout<< "Right";
        }
        else
        {
            cout<< "Wrong";
        }

    }
    else if(c=='>')
    {
        if(a>b)
        {
            cout<< "Right";
        }
        else
        {
            cout<< "Wrong";
        }

    }

    else if(c=='=')
    {
        if(a=b)
        {
            cout<< "Right";
        }
        else
        {
            cout<< "Wrong";
        }

    }



    return 0;
}
