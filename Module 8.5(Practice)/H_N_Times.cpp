#include <bits/stdc++.h>
using namespace std;

void print(int a, char c)
{
    for (int i = 0; i < a; i++)
    {
        cout << c << " ";
    }
}

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int a;
        char c;
        cin >> a >> c;

        print(a, c);
        // cout << '\n';
        cout << endl;
    }

    return 0;
}