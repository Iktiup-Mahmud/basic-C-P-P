#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // char arr[n];

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    string s;

    cin >> s;

    // cout << endl;
    // sort(arr, arr + n, greater<char>());
    // sort(arr, arr + n);
    sort(s.begin(), s.end());

    cout << s << endl;

    // for (int i = 0; i < n; i++)
    // {

    //     cout << arr[i];
    // }

    return 0;
}