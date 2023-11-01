#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    int arr[n][10000];

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //     }
    // }
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        // int arr[a];
        for (int j = 0; j < a; j++)
        {
            cin >> arr[i][j];
        }
    }

    // int x, y;
    // cin >> x>> y;

    // for (int i = 0; i < count; i++)
    // {
    //     /* code */
    // }
    // cout << x << y << "Abcd" << endl;

    // for (int j = 0; j < a; j++)
    // {
    //     cout << arr[j];
    // }
    // cout << n << q<< endl;

    while (q--)
    {
        int x, y;
        cin >> x >> y;
        cout << arr[x][y] << endl;
    }

    // cout << n << q << k;

    return 0;
}