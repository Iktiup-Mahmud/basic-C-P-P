#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    string x;
    cin >> x;

    int a = s.find(x, 4);
    int b = 0;

    while (a != -1)
    {
        // s.resize()
        s.erase(1, a);
        a = s.find(x, 4);
        // cout << s;
        b++;
    }

    cout << b;

    return 0;
}