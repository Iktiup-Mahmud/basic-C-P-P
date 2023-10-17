#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int i = 0, j = n - 1, res = 1;

    while (i <= n / 2)
    {
        if (arr[i] != arr[j])
        {
            res = 0;
            break;
        }
        i++;
        j--;
    }

    if (res == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    // cout << res;

    return 0;
}