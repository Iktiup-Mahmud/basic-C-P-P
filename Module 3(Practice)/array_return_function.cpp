#include <bits/stdc++.h>
using namespace std;

int *get_array(int n)
{
    // dynamic array
    int *arr = new int[n];

    // get input
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // cout << arr << " ";


    return arr;
}

int main()
{
    int n;
    cin >> n;

    int *p = get_array(n);

    // cout << p[1];

    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }
    

    // cout << *p;

    return 0;
}