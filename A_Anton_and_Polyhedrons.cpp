// BISMILLAH
#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> s1 = {
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20}};
    int sum = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        sum += s1[s];
    }
    cout << sum << endl;

    return 0;
}
// std::map in C++ The map is a powerful and flexible container that provides efficient key-based  lookups.