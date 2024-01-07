//Bismillah
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        s.back() = '4';
        cout << s << endl;
    }

    return 0;
}