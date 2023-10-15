#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;

    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++)
    {
        b[i] = a[i];
        if (i >= n)
        {
            cin >> b[i];
        }
    }
    delete[] a;

    for (int  i = 0; i < m; i++)
    {
        cout << b[i] << " ";
    }
    

    return 0;
}

// for (int i = 0; i < n + m; i++)
// {
//     // cout << i << " ";
//     if (i < n)
//     {
//         cout << a[i] << " ";
//     }
//     else if(i >= n)
//     {
//         cout << b[i-n] << " ";
//     }
// }