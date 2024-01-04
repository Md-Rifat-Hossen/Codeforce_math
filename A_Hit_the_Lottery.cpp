// BISMILLAH
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {100, 20, 10, 5, 1};
    int count = 0;
    int n;
    cin >> n;

    for (int i = 0; i < 5; i++)
    {
        count += n / a[i];
        n %= a[i];
    }
    cout << count << endl;

    return 0;
}