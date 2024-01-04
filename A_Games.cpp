// //BISMILLAH
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;

//     int number(0);
//     vector<int> h(n), a(n);
//     for (int i = 0; i < n; ++i)
//     {
//         cin >> h[i] >> a[i];
//         for (int j = 0; j < i; ++j)
//         {
//             if (h[i] == a[j])
//             {
//                 number += 1;
//             }
//             if (a[i] == h[j])
//             {
//                 number = 1;
//             }
//         }
//     }
//     cout << number << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n][2];
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)

    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == a[i][j + 1])
            {
                c++;
            }
        }
    }
    cout << c << endl;

    return 0;
}