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
    int ma = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        ma = max(ma, arr[i]);
    }

    cout << ma;

    return 0;
}