#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, x;
        cin >> s >> x;

        int a = s.find(x);

        while (a != -1)
        {
            s.replace(a, x.length(), "$");
            a = s.find(x);
        }
        cout << s << endl;
        
    }

    return 0;
}