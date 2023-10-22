#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int x = s.find("EGYPT");

    // int a = 0;

    while (x != -1)
    {
        // s.resize(7);

        s.replace(x, 5, " ");

        x = s.find("EGYPT");
        // if (x == -1)
        // {
        // };
        // break;
        // a++;
    }
    cout << s << endl;

    // if (x != -1)
    // {
    // }

    // if(s.find("EGYPT")){

    // }
    // s.replace(7, 5, " ");
    // cout << x;
    // cout << a;

    return 0;
}