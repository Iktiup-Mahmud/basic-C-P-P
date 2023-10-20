#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string::iterator it;
    string s;
    cin >> s;

    // for (int i = 0; i < s.length(); i++)
    // {
    //     cout << s[i]<< endl;
    // }

    // cout << *s.begin() << endl;
    // cout << *(s.end() -1) << endl;


    // g++ 11(-)
    // for (string::iterator it = s.begin(); it < s.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    // g++ 14(+)
    for (auto it = s.begin(); it < s.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}