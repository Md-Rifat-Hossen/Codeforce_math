// BISMILLAH

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int r = 1;
    bool l = false;
    while (r <= n)
    {
        if (r % 2 == 1)
        {
            for (int i = 0; i < m; i++)
            {
                cout << "#";
                // cout << endl;
            }
            cout << endl;
        }
        else if (r % 2 == 0 && l == false)
        {
            for (int i = 0; i < m - 1; i++)

                cout << ".";
            cout << "#" << endl;

            l = true;
        }
        else
        {
            cout << "#";
            for (int i = 0; i < m - 1; i++)

                cout << ".";
            cout << endl;

            l = false;
        }
        r++;
    }

    return 0;
}