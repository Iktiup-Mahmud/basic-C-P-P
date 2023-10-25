#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    string x = "Ratul";

    // int a = s.find(x);
    stringstream ss(s);
    string word;
    bool res = false;

    while (ss >> word)
    {
        if (word == x)
        {
            res = true;
            break;
        }
        // else
        // {
        //     cout << "NO" << endl;
        // }
    }
    if (res )
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    // if (a >= 0)
    // {
    //     cout << "YES" << endl;
    // }
    // else
    // {
    //     cout << "NO" << endl;
    // }

    return 0;
}