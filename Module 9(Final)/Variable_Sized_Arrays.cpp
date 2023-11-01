#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    int arr[n][100000];

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

    for (int i = 0; i < q; i++)
    {
        /* code */
        int x, y;
        cin >> x >> y;
        cout << arr[x][y] << endl;
    }
    
    return 0;
}