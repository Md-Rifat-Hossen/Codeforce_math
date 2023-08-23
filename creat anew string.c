#include <iostream>
using namespace std;
int main()
{
    char a[1000001];
    getline(cin,a);
    for (int i = 0; a[i] != '\\'; i++)
    {
        cout<<a[i]<<endl;
    }

    return 0;
}
