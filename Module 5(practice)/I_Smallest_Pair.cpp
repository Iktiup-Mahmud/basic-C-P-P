#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        /* code */
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int res = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                // int res2 = arr[i] + arr[j] + (j + 1) - (i + 1);
                int res2 = arr[i] + arr[j] + j - i;
                // cout << arr[i] << arr[j] << (j+ 1) << (i + 1) << endl;

                if (res2 < res)
                {
                    res = res2;
                }
            }
        }

        cout << res << endl;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    return 0;
}