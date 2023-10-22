#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int t;
        cin >> t;

        cin.ignore();
        // cin.ignore();

        string s;
        cin >> s;
        // getline(cin, s);

        // cout << t << " " << s<< endl;

        int arr[26] = {0};
        bool is_first = true;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i])
            {
                // cout << arr[i]<< i << s[i] << endl;
                if (arr[s[i] - 65] == 0)
                {
                    arr[s[i] - 65] += 2;
                    is_first = false;
                    // cout << s[i] <<"if" << endl;
                }
                else
                {
                    arr[s[i] - 65]++;
                    // cout << s[i] <<"else" << endl;
                }
            }
        }
        int total = 0;

        for (int i = 0; i < 26; i++)
        {
            if (arr[i] > 0)
            {
                total += arr[i];
            }
        }
        cout << total << endl;

    }

    return 0;
}