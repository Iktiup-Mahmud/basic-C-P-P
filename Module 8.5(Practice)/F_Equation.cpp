#include <bits/stdc++.h>
using namespace std;

long long int solve(int x, int y)
{

    long long int a = 0;

    for (int i = 2; i <= y; i += 2)
    {
        // cout << a << " 1st " << i << endl;
        // cout << a << " " << i << " " << pow(x, i) << endl;

        a+=pow(x, i);
    }
    // cout <<  a;
    return a;
}

int main()
{
    int x, y;
    cin >> x >> y;

    long long int res = solve(x, y);

    cout<< res;

    return 0;
}