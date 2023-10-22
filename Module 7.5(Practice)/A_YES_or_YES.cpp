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

        // for (char c : s)
        // {
        // }

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 65 && s[i] <= 90)
            {
                s[i] += 32;
                // cout << s << endl;
            }
        }

        if (s == "yes")
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}