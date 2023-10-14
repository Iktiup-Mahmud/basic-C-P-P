#include <bits/stdc++.h>
using namespace std;

int main()
{
    char x;
    cin >> x;
    // cout << x;

    if (x >= '0' && x <= '9')
    {
        cout << "IS DIGIT" << endl;
    }
    else if (x >= 'A' && x <= 'Z')
    {
        cout << "ALPHA" << endl<< "IS CAPITAL" << endl;
    }
    else if (x >= 97 && x <= 122)
    {
        cout << "ALPHA" << endl<< "IS SMALL" << endl;
    }

    return 0;
}