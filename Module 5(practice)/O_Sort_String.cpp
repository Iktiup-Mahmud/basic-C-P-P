#include <bits/stdc++.h>
using namespace std;

string printNTimes(char c, int n)
{
    // character c will be printed n times
    cout << string(n, c) << endl;
}

int main()
{
    int n;
    cin >> n;

    char arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int fr[26] = {0};

    for (int i = 0; i < n; i++)
    {
        if (arr[i])
        {
            // cout << arr[i]-96;
            fr[arr[i] - 97] += 1;
        };
    };

    for (int i = 0; i < 26; i++)
    {
        if (fr[i] > 0)
        {
            // cout << char(i + 97)  << endl;
            char c = char(i + 97);
            int n = fr[i];
            // string a = printNTimes(c, n);
            // cout << c << n << endl;
            // cout << fr[i] << endl;
            // cout << arr[1] << endl;

            for (int j = 0; j < fr[i]; j++)
            {
                cout << c;
            }
                }
    }

    // string s;

    // cin >> s;

    // cout << endl;
    // sort(arr, arr + n, greater<char>());
    // sort(arr, arr + n);
    // sort(s.begin(), s.end());

    // cout << s << endl;

    // for (int i = 0; i < n; i++)
    // {

    //     cout << arr[i];
    // }

    return 0;
}