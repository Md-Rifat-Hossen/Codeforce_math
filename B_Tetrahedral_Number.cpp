#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int n;
    // cin >> n;
    for (int i = 0; i <= 3; i++)
    {
        for (int j = 0; i + j <= 3; j++)
        {
            for (int k = 0; i + j + k <= 3; k++)
                cout << i << " " << j << " " << k << endl;
        }
    }

    return 0;
}