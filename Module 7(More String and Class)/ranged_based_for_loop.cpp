#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    // getline(cin, s);
    cin >> s;

    // by indexing we got element
    // for (int i = 0; i < s.length(); i++)
    // {
    //     cout << s[i] << endl;
    // }

    // directly access to the element
    for (char a : s)
    {
        cout << a << endl;
    }

    return 0;
}