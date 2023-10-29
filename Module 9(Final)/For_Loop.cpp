#include <bits/stdc++.h>
using namespace std;

void func(int x)
{
    if (x == 1)
    {
        cout << "one" << endl;
    }
    else if (x == 2)
    {
        cout << "two" << endl;
    }
    else if (x == 3)
    {
        cout << "three" << endl;
    }
    else if (x == 4)
    {
        cout << "four" << endl;
    }
    else if (x == 5)
    {
        cout << "five" << endl;
    }
    else if (x == 6)
    {
        cout << "six" << endl;
    }
    else if (x == 7)
    {
        cout << "seven" << endl;
    }
    else if (x == 8)
    {
        cout << "eight" << endl;
    }
    else if (x == 9)
    {
        cout << "nine" << endl;
    }
};

int main()
{
    int n, m;
    cin >> n >> m;
    // cout << n << m;
    for (int i = n; i <= m; i++)
    {
        // int x = m - n;
        if (i <= 9 && i >= 1)
        {
            func(i);
        }
        else
        {
            if (i % 2 == 0)
            {
                cout << "even" << endl;
            }
            else
            {
                cout << "odd" << endl;
            }
        }

        // cout << i;
    }

    return 0;
}