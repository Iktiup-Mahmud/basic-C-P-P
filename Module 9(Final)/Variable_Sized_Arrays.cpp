#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q, k;
    cin >> n >> q;

    // int arr[n][n];

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //     }
    // }
    while (n--)
    {
        for (int i = 0; i < q; i++)
        {
            int a;
            cin >> a;
            int arr[a];
            for (int j = 0; j < a; j++)
            {
                cin >> arr[j];
            }
            for (int j = 0; j < a; j++)
            {
                cout << arr[j];
            }
        }
    }
    

    // cout << n << q << k;

    return 0;
}